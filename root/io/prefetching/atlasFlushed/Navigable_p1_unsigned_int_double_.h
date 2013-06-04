//////////////////////////////////////////////////////////
//   This class has been generated by TFile::MakeProject
//     (Tue Jun 14 15:33:00 2011 by ROOT version 5.31/01)
//      from the StreamerInfo in file http://root.cern.ch/files/atlasFlushed.root
//////////////////////////////////////////////////////////


#ifndef Navigable_p1_unsigned_int_double__h
#define Navigable_p1_unsigned_int_double__h
template <typename T0, typename T1> class Navigable_p1;
template <> class Navigable_p1<unsigned int,double>;

#include "ElementLinkVector_p1_unsigned_int_.h"
#include "Riostream.h"
#include <vector>

template <typename T0, typename T1> class Navigable_p1;
template <> class Navigable_p1<unsigned int,double> {

public:
// Nested classes declaration.

public:
// Data Members.
   ElementLinkVector_p1<unsigned int> m_links;     //
   vector<double>                     m_parameters;    //

   Navigable_p1();
   Navigable_p1(const Navigable_p1 & );
   virtual ~Navigable_p1();

};
#endif