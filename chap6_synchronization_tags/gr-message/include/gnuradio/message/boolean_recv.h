/* -*- c++ -*- */
/*
 * Copyright 2024 gr-message author.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MESSAGE_BOOLEAN_RECV_H
#define INCLUDED_MESSAGE_BOOLEAN_RECV_H

#include <gnuradio/message/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
namespace message {

/*!
 * \brief <+description of block+>
 * \ingroup message
 *
 */
class MESSAGE_API boolean_recv : virtual public gr::sync_block
{
public:
    typedef std::shared_ptr<boolean_recv> sptr;

    /*!
     * \brief Return a shared_ptr to a new instance of message::boolean_recv.
     *
     * To avoid accidental use of raw pointers, message::boolean_recv's
     * constructor is in a private implementation
     * class. message::boolean_recv::make is the public interface for
     * creating new instances.
     */
    static sptr make();
};

} // namespace message
} // namespace gr

#endif /* INCLUDED_MESSAGE_BOOLEAN_RECV_H */
