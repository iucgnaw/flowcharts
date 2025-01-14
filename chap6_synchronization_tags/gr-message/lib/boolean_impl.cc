/*
 * Copyright 2024 jmfriedt.
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "boolean_impl.h"
#include "pmt/pmt.h"
#include <gnuradio/io_signature.h>

namespace gr {
namespace message {

using input_type = float;
boolean::sptr boolean::make() { return gnuradio::make_block_sptr<boolean_impl>(); }

boolean_impl::boolean_impl()     // constructor
    : gr::sync_block("boolean",
                     gr::io_signature::make(1 , 1, sizeof(input_type)),
                     gr::io_signature::make(0, 0, 0))
{ message_port_register_out(pmt::mp("boolean"));
}

boolean_impl::~boolean_impl() {} // destructor

int boolean_impl::work(int noutput_items, // work function (infinite loop)
                       gr_vector_const_void_star& input_items,
                       gr_vector_void_star& output_items)
{ int index;
  pmt::pmt_t P = pmt::from_bool(true);
  auto in = static_cast<const input_type*>(input_items[0]);
  for (index=0;index<noutput_items-1;index++)
     if ((in[index]<=0)&&(in[index+1]>0))
        {printf("send\n");
         message_port_pub(pmt::mp("boolean"), P);
        }
  return noutput_items;
}

} 
}
