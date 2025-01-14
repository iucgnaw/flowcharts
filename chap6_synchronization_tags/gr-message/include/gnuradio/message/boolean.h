/* -*- c++ -*- */
/*
 * Copyright 2024 jmfriedt.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MESSAGE_BOOLEAN_H
#define INCLUDED_MESSAGE_BOOLEAN_H

#include <gnuradio/message/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
namespace message {

/*!
 * \brief <+description of block+>
 * \ingroup message
 *
 */
class MESSAGE_API boolean : virtual public gr::sync_block
{
public:
    typedef std::shared_ptr<boolean> sptr;

    /*!
     * \brief Return a shared_ptr to a new instance of message::boolean.
     *
     * To avoid accidental use of raw pointers, message::boolean's
     * constructor is in a private implementation
     * class. message::boolean::make is the public interface for
     * creating new instances.
     */
    static sptr make();
};

} // namespace message
} // namespace gr

#endif /* INCLUDED_MESSAGE_BOOLEAN_H */
