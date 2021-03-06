
#ifndef BOOST_MPL_PUSH_FRONT_HPP_INCLUDED
#define BOOST_MPL_PUSH_FRONT_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source: /cvsroot/oedt/oedt/3dParty/boost_1_32_0/boost/mpl/push_front.hpp,v $
// $Date: 2005/10/11 02:00:20 $
// $Revision: 1.1.1.1 $

#include <boost/mpl/push_front_fwd.hpp>
#include <boost/mpl/aux_/push_front_impl.hpp>
#include <boost/mpl/sequence_tag.hpp>
#include <boost/mpl/aux_/na_spec.hpp>
#include <boost/mpl/aux_/lambda_support.hpp>

namespace boost { namespace mpl {

template<
      typename BOOST_MPL_AUX_NA_PARAM(Sequence)
    , typename BOOST_MPL_AUX_NA_PARAM(T)
    >
struct push_front
    : push_front_impl< typename sequence_tag<Sequence>::type >
        ::template apply< Sequence,T >
{
    BOOST_MPL_AUX_LAMBDA_SUPPORT(2,push_front,(Sequence,T))
};


template< 
      typename BOOST_MPL_AUX_NA_PARAM(Sequence)
    >
struct has_push_front
    : has_push_front_impl< typename sequence_tag<Sequence>::type >
        ::template apply< Sequence >
{
    BOOST_MPL_AUX_LAMBDA_SUPPORT(1,has_push_front,(Sequence))
};

BOOST_MPL_AUX_NA_SPEC(2, push_front)
BOOST_MPL_AUX_NA_SPEC(1, has_push_front)

}}

#endif // BOOST_MPL_PUSH_FRONT_HPP_INCLUDED
