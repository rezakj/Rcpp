// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; tab-width: 8 -*-
//
// Module_generated_class_constructor.h: Rcpp R/C++ interface class library -- Rcpp modules
//
// Copyright (C) 2010	Dirk Eddelbuettel and Romain Francois
//
// This file is part of Rcpp.
//
// Rcpp is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// Rcpp is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//                                                       
// You should have received a copy of the GNU General Public License
// along with Rcpp.  If not, see <http://www.gnu.org/licenses/>.

#ifndef Rcpp_Module_generated_class_constructor_h
#define Rcpp_Module_generated_class_constructor_h
    
    self& constructor( init_0, ValidConstructor valid = &yes ){
        AddConstructor( new Constructor_0<Class>, valid ) ;
        return *this ;
    }

    template <typename U0>
    self& constructor( init_1<U0>, ValidConstructor valid = &yes_arity<1> ){
        AddConstructor( new Constructor_1<Class,U0>, valid) ;
        return *this ;
    }

    template <typename U0, typename U1>
    self& constructor( init_2<U0,U1>, ValidConstructor valid = &yes_arity<2> ){
        AddConstructor( new Constructor_2<Class,U0,U1>, valid ) ;
        return *this ;
    }

#endif