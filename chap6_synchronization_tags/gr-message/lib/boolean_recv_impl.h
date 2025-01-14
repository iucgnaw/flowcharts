/* -*- c++ -*- */
/*
 * Copyright 2024 gr-message author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MESSAGE_BOOLEAN_RECV_IMPL_H
#define INCLUDED_MESSAGE_BOOLEAN_RECV_IMPL_H

#include <gnuradio/message/boolean_recv.h>

namespace gr {
namespace message {

class boolean_recv_impl : public boolean_recv
{
private:
    void message_handler_function(const pmt::pmt_t& msg);

public:
    boolean_recv_impl();
    ~boolean_recv_impl();

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} // namespace message
} // namespace gr

#endif /* INCLUDED_MESSAGE_BOOLEAN_RECV_IMPL_H */
