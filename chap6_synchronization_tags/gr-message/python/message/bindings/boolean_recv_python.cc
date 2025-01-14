/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(boolean_recv.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(e90c60c35450ff4f7b48d88a39d96639)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/message/boolean_recv.h>
// pydoc.h is automatically generated in the build directory
#include <boolean_recv_pydoc.h>

void bind_boolean_recv(py::module& m)
{

    using boolean_recv = ::gr::message::boolean_recv;


    py::class_<boolean_recv,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<boolean_recv>>(m, "boolean_recv", D(boolean_recv))

        .def(py::init(&boolean_recv::make), D(boolean_recv, make))


        ;
}
