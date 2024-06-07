/*********************************************************************
 * file:   Reflection.h
 * date:   March 25, 2024
 * 
 * brief:  
 *********************************************************************/

#pragma once

#include <Serializing.hpp>

// used prior to a variable declaration: printable int Value;
#define printable    friend class gep::json::File;
#define serializable // friend class gep::Serializer;
