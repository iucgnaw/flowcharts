/* -*- c++ -*- */
/*
 * Copyright 2024 jmfriedt.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MESSAGE_BOOLEAN_IMPL_H
#define INCLUDED_MESSAGE_BOOLEAN_IMPL_H

#include <gnuradio/message/boolean.h>

namespace gr {
namespace message {

class boolean_impl : public boolean
{
private:

public:
    boolean_impl();
    ~boolean_impl();

    // Where all the action really happens
    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} // namespace message
} // namespace gr

#endif /* INCLUDED_MESSAGE_BOOLEAN_IMPL_H */
