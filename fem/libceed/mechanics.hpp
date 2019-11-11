// Copyright (c) 2010, Lawrence Livermore National Security, LLC. Produced at
// the Lawrence Livermore National Laboratory. LLNL-CODE-443211. All Rights
// reserved. See file COPYRIGHT for details.
//
// This file is part of the MFEM library. For more information and source code
// availability see http://mfem.org.
//
// MFEM is free software; you can redistribute it and/or modify it under the
// terms of the GNU Lesser General Public License (as published by the Free
// Software Foundation) version 2.1 dated February 1999.

#ifndef MFEM_LIBCEED_MECH_HPP
#define MFEM_LIBCEED_MECH_HPP

#include "ceed.hpp"
#include "../fespace.hpp"

namespace mfem
{

#ifdef MFEM_USE_CEED

/// Initialize a Mechanics Integrator using libCEED
void CeedPAMechanicsAssemble(const FiniteElementSpace &fes,
                             const mfem::IntegrationRule &irm,
                             const double* ktan_ptr,
                             CeedData& ceedData);

#endif

}

#endif // MFEM_LIBCEED_NECH_HPP
