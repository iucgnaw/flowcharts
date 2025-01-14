/*
 * Copyright 2024 jmfriedt.
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "boolean_recv_impl.h"
#include "pmt/pmt.h"
#include <gnuradio/io_signature.h>

namespace gr {
namespace message {

boolean_recv::sptr boolean_recv::make()
{
    return gnuradio::make_block_sptr<boolean_recv_impl>();
}

void boolean_recv_impl::message_handler_function(const pmt::pmt_t& msg)
{printf("receive\n");}

boolean_recv_impl::boolean_recv_impl()
    : gr::sync_block("boolean_recv",
                     gr::io_signature::make(0, 0, 0),
                     gr::io_signature::make(0, 0, 0))
{ message_port_register_in(pmt::mp("boolean"));
  set_msg_handler(pmt::mp("boolean"),
   [this](const pmt::pmt_t& msg) { message_handler_function(msg); });
}

boolean_recv_impl::~boolean_recv_impl() {}

int boolean_recv_impl::work(int noutput_items,
                            gr_vector_const_void_star& input_items,
                            gr_vector_void_star& output_items)
{
    return noutput_items;
}

} /* namespace message */
} /* namespace gr */
