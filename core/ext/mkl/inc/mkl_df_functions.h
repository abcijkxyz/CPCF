/* file: mkl_df_functions.h */
/*******************************************************************************
* Copyright 2006-2016 Intel Corporation All Rights Reserved.
*
* The source code,  information  and material  ("Material") contained  herein is
* owned by Intel Corporation or its  suppliers or licensors,  and  title to such
* Material remains with Intel  Corporation or its  suppliers or  licensors.  The
* Material  contains  proprietary  information  of  Intel or  its suppliers  and
* licensors.  The Material is protected by  worldwide copyright  laws and treaty
* provisions.  No part  of  the  Material   may  be  used,  copied,  reproduced,
* modified, published,  uploaded, posted, transmitted,  distributed or disclosed
* in any way without Intel's prior express written permission.  No license under
* any patent,  copyright or other  intellectual property rights  in the Material
* is granted to  or  conferred  upon  you,  either   expressly,  by implication,
* inducement,  estoppel  or  otherwise.  Any  license   under such  intellectual
* property rights must be express and approved by Intel in writing.
*
* Unless otherwise agreed by Intel in writing,  you may not remove or alter this
* notice or  any  other  notice   embedded  in  Materials  by  Intel  or Intel's
* suppliers or licensors in any way.
*******************************************************************************/

/*
//++
//  User-level DF function declarations
//--
*/

#ifndef __MKL_DF_FUNCTIONS_H__
#define __MKL_DF_FUNCTIONS_H__

#include "mkl_df_types.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*
//++
//  EXTERNAL API MACROS.
//  Used to construct DF function declaration. Change them if you are going to
//  provide different API for DF functions.
//--
*/

#if !defined(MKL_CALL_CONV)
   #if !defined(__MIC__)
      #if defined(MKL_STDCALL)
         #define MKL_CALL_CONV __stdcall
      #else
         #define MKL_CALL_CONV __cdecl
      #endif
   #else
      #define MKL_CALL_CONV
   #endif
#endif

#if  !defined(_Mkl_Api)
#define _Mkl_Api(rtype,name,arg)   extern rtype MKL_CALL_CONV   name    arg;
#endif

#if  !defined(_mkl_api)
#define _mkl_api(rtype,name,arg)   extern rtype MKL_CALL_CONV   name    arg;
#endif

#if  !defined(_MKL_API)
#define _MKL_API(rtype,name,arg)   extern rtype MKL_CALL_CONV   name    arg;
#endif

/*
//++
//  DF CONSTRUCTOR FUNCTION DECLARATIONS.
//--
*/

/* NewTask1D - 1d task creation/initialization */
_Mkl_Api(int,dfsNewTask1D,(DFTaskPtr *, const MKL_INT  , const float  [], const MKL_INT  , const MKL_INT  , const float  [], const MKL_INT  ))
_mkl_api(int,dfsnewtask1d,(DFTaskPtr *, const MKL_INT *, const float  [], const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *))
_MKL_API(int,DFSNEWTASK1D,(DFTaskPtr *, const MKL_INT *, const float  [], const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *))

_Mkl_Api(int,dfdNewTask1D,(DFTaskPtr *, const MKL_INT  , const double [], const MKL_INT  , const MKL_INT  , const double [], const MKL_INT  ))
_mkl_api(int,dfdnewtask1d,(DFTaskPtr *, const MKL_INT *, const double [], const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *))
_MKL_API(int,DFDNEWTASK1D,(DFTaskPtr *, const MKL_INT *, const double [], const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *))

/*
//++
//  DF EDITOR FUNCTION DECLARATIONS.
//--
*/

/* Modifies a pointer to an array held in a Data Fitting task descriptor */
_Mkl_Api(int,dfsEditPtr,(DFTaskPtr  , const MKL_INT  , const float  *))
_mkl_api(int,dfseditptr,(DFTaskPtr *, const MKL_INT *, const float  *))
_MKL_API(int,DFSEDITPTR,(DFTaskPtr *, const MKL_INT *, const float  *))

_Mkl_Api(int,dfdEditPtr,(DFTaskPtr  , const MKL_INT  , const double *))
_mkl_api(int,dfdeditptr,(DFTaskPtr *, const MKL_INT *, const double *))
_MKL_API(int,DFDEDITPTR,(DFTaskPtr *, const MKL_INT *, const double *))

/* Modifies a parameter value in a Data Fitting task descriptor */
_Mkl_Api(int,dfiEditVal,(DFTaskPtr  , const MKL_INT  , const MKL_INT  ))
_mkl_api(int,dfieditval,(DFTaskPtr *, const MKL_INT *, const MKL_INT *))
_MKL_API(int,DFIEDITVAL,(DFTaskPtr *, const MKL_INT *, const MKL_INT *))

/* Modifies a pointer to the memory representing a coordinate of the data
   stored in matrix format (function or spline coefficients) */
_Mkl_Api(int,dfsEditIdxPtr,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const float  []))
_mkl_api(int,dfseditidxptr,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  []))
_MKL_API(int,DFSEDITIDXPTR,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  []))

_Mkl_Api(int,dfdEditIdxPtr,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const double []))
_mkl_api(int,dfdeditidxptr,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double []))
_MKL_API(int,DFDEDITIDXPTR,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double []))

/* Modifies parameters of Piece-wise Polynomial (PP) spline */
_Mkl_Api(int,dfsEditPPSpline1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const MKL_INT  , const float  [], const MKL_INT  , const float  [], const float  [], const MKL_INT  ))
_mkl_api(int,dfseditppspline1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], const float  [], const MKL_INT *))
_MKL_API(int,DFSEDITPPSPLINE1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], const float  [], const MKL_INT *))

_Mkl_Api(int,dfdEditPPSpline1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const MKL_INT  , const double [], const MKL_INT  , const double [], const double [], const MKL_INT  ))
_mkl_api(int,dfdeditppspline1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], const double [], const MKL_INT *))
_MKL_API(int,DFDEDITPPSPLINE1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], const double [], const MKL_INT *))

/*
//++
//  DF TASK QUERYING FUNCTION DECLARATIONS.
//--
*/

/* Reads a pointer to an array held in a Data Fitting task descriptor */
_Mkl_Api(int,dfsQueryPtr,(DFTaskPtr  , const MKL_INT  , float  **))
_mkl_api(int,dfsqueryptr,(DFTaskPtr *, const MKL_INT *, float  **))
_MKL_API(int,DFSQUERYPTR,(DFTaskPtr *, const MKL_INT *, float  **))

_Mkl_Api(int,dfdQueryPtr,(DFTaskPtr  , const MKL_INT  , double **))
_mkl_api(int,dfdqueryptr,(DFTaskPtr *, const MKL_INT *, double **))
_MKL_API(int,DFDQUERYPTR,(DFTaskPtr *, const MKL_INT *, double **))

/* Reads a parameter value in a Data Fitting task descriptor */
_Mkl_Api(int,dfiQueryVal,(DFTaskPtr  , const MKL_INT  , MKL_INT *))
_mkl_api(int,dfiqueryval,(DFTaskPtr *, const MKL_INT *, MKL_INT *))
_MKL_API(int,DFIQUERYVAL,(DFTaskPtr *, const MKL_INT *, MKL_INT *))

/* Reads a pointer to the memory representing a coordinate of the data
   stored in matrix format (function or spline coefficients) */
_Mkl_Api(int,dfsQueryIdxPtr,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , float  **))
_mkl_api(int,dfsqueryidxptr,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, float  **))
_MKL_API(int,DFSQUERYIDXPTR,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, float  **))

_Mkl_Api(int,dfdQueryIdxPtr,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , double **))
_mkl_api(int,dfdqueryidxptr,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, double **))
_MKL_API(int,DFDQUERYIDXPTR,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, double **))


/*
//++
//  DF COMPUTE FUNCTION DECLARATIONS.
//--
*/
/* Spline coefficients constructor */
_Mkl_Api(int,dfsConstruct1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  ))
_mkl_api(int,dfsconstruct1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *))
_MKL_API(int,DFSCONSTRUCT1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *))

_Mkl_Api(int,dfdConstruct1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  ))
_mkl_api(int,dfdconstruct1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *))
_MKL_API(int,DFDCONSTRUCT1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *))

/* Spline-based computations: search, interpolation and integration with call back support */
_Mkl_Api(int,dfsInterpolateEx1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const MKL_INT  , const float  [], const MKL_INT  , const MKL_INT  , const MKL_INT [], const float  [], float  [], const MKL_INT  , MKL_INT [], const dfsInterpCallBack , const void *, const dfsInterpCallBack , const void *, const dfsInterpCallBack , const void *, const dfsSearchCellsCallBack , const void *))
_mkl_api(int,dfsinterpolateex1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const MKL_INT *, const MKL_INT [], const float  [], float  [], const MKL_INT *, MKL_INT [], const dfsInterpCallBack , const void *, const dfsInterpCallBack , const void *, const dfsInterpCallBack , const void *, const dfsSearchCellsCallBack , const void *))
_MKL_API(int,DFSINTERPOLATEEX1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const MKL_INT *, const MKL_INT [], const float  [], float  [], const MKL_INT *, MKL_INT [], const dfsInterpCallBack , const void *, const dfsInterpCallBack , const void *, const dfsInterpCallBack , const void *, const dfsSearchCellsCallBack , const void *))

_Mkl_Api(int,dfdInterpolateEx1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const MKL_INT  , const double [], const MKL_INT  , const MKL_INT  , const MKL_INT [], const double [], double [], const MKL_INT  , MKL_INT [], const dfdInterpCallBack , const void *, const dfdInterpCallBack , const void *, const dfdInterpCallBack , const void *, const dfdSearchCellsCallBack , const void *))
_mkl_api(int,dfdinterpolateex1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const MKL_INT *, const MKL_INT [], const double [], double [], const MKL_INT *, MKL_INT [], const dfdInterpCallBack , const void *, const dfdInterpCallBack , const void *, const dfdInterpCallBack , const void *, const dfdSearchCellsCallBack , const void *))
_MKL_API(int,DFDINTERPOLATEEX1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const MKL_INT *, const MKL_INT [], const double [], double [], const MKL_INT *, MKL_INT [], const dfdInterpCallBack , const void *, const dfdInterpCallBack , const void *, const dfdInterpCallBack , const void *, const dfdSearchCellsCallBack , const void *))

/* Spline-based computations: search, interpolation and integration */
_Mkl_Api(int,dfsInterpolate1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const MKL_INT  , const float  [], const MKL_INT  , const MKL_INT  , const MKL_INT [], const float  [], float  [], const MKL_INT  , MKL_INT [] ))
_mkl_api(int,dfsinterpolate1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const MKL_INT *, const MKL_INT [], const float  [], float  [], const MKL_INT *, MKL_INT [] ))
_MKL_API(int,DFSINTERPOLATE1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const MKL_INT *, const MKL_INT [], const float  [], float  [], const MKL_INT *, MKL_INT [] ))

_Mkl_Api(int,dfdInterpolate1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const MKL_INT  , const double [], const MKL_INT  , const MKL_INT  , const MKL_INT [], const double [], double [], const MKL_INT  , MKL_INT [] ))
_mkl_api(int,dfdinterpolate1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const MKL_INT *, const MKL_INT [], const double [], double [], const MKL_INT *, MKL_INT [] ))
_MKL_API(int,DFDINTERPOLATE1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const MKL_INT *, const MKL_INT [], const double [], double [], const MKL_INT *, MKL_INT [] ))

/* Cells search with call back support */
_Mkl_Api(int,dfsSearchCellsEx1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const float  [], const MKL_INT  , const float  [], MKL_INT [], const dfsSearchCellsCallBack , const void * ))
_mkl_api(int,dfssearchcellsex1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], MKL_INT [], const dfsSearchCellsCallBack , const void * ))
_MKL_API(int,DFSSEARCHCELLSEX1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], MKL_INT [], const dfsSearchCellsCallBack , const void * ))

_Mkl_Api(int,dfdSearchCellsEx1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const double [], const MKL_INT  , const double [], MKL_INT [], const dfdSearchCellsCallBack , const void * ))
_mkl_api(int,dfdsearchcellsex1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], MKL_INT [], const dfdSearchCellsCallBack , const void * ))
_MKL_API(int,DFDSEARCHCELLSEX1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], MKL_INT [], const dfdSearchCellsCallBack , const void * ))

/* Cells search */
_Mkl_Api(int,dfsSearchCells1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const float  [], const MKL_INT  , const float  [], MKL_INT [] ))
_mkl_api(int,dfssearchcells1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], MKL_INT [] ))
_MKL_API(int,DFSSEARCHCELLS1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], MKL_INT [] ))

_Mkl_Api(int,dfdSearchCells1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const double [], const MKL_INT  , const double [], MKL_INT [] ))
_mkl_api(int,dfdsearchcells1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], MKL_INT [] ))
_MKL_API(int,DFDSEARCHCELLS1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], MKL_INT [] ))

/* Spline-based integration */
_Mkl_Api(int,dfsIntegrate1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const float  [], const MKL_INT  , const float  [], const MKL_INT  , const float  [], const float  [], float  [], const MKL_INT  ))
_mkl_api(int,dfsintegrate1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], const MKL_INT *, const float  [], const float  [], float  [], const MKL_INT *))
_MKL_API(int,DFSINTEGRATE1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], const MKL_INT *, const float  [], const float  [], float  [], const MKL_INT *))

_Mkl_Api(int,dfdIntegrate1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const double [], const MKL_INT  , const double [], const MKL_INT  , const double [], const double [], double [], const MKL_INT  ))
_mkl_api(int,dfdintegrate1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], const MKL_INT *, const double [], const double [], double [], const MKL_INT *))
_MKL_API(int,DFDINTEGRATE1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], const MKL_INT *, const double [], const double [], double [], const MKL_INT *))

/* Spline-based integration with call back support */
_Mkl_Api(int,dfsIntegrateEx1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const float  [], const MKL_INT  , const float  [], const MKL_INT  , const float  [], const float  [], float  [], const MKL_INT  , const dfsIntegrCallBack , const void *, const dfsIntegrCallBack , const void *, const dfsIntegrCallBack , const void *, const dfsSearchCellsCallBack , const void *))
_mkl_api(int,dfsintegrateex1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], const MKL_INT *, const float  [], const float  [], float  [], const MKL_INT *, const dfsIntegrCallBack , const void *, const dfsIntegrCallBack , const void *, const dfsIntegrCallBack , const void *, const dfsSearchCellsCallBack , const void *))
_MKL_API(int,DFSINTEGRATEEX1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const float  [], const MKL_INT *, const float  [], const MKL_INT *, const float  [], const float  [], float  [], const MKL_INT *, const dfsIntegrCallBack , const void *, const dfsIntegrCallBack , const void *, const dfsIntegrCallBack , const void *, const dfsSearchCellsCallBack , const void *))

_Mkl_Api(int,dfdIntegrateEx1D,(DFTaskPtr  , const MKL_INT  , const MKL_INT  , const double [], const MKL_INT  , const double [], const MKL_INT  , const double [], const double [], double [], const MKL_INT  , const dfdIntegrCallBack , const void *, const dfdIntegrCallBack , const void *, const dfdIntegrCallBack , const void *, const dfdSearchCellsCallBack , const void *))
_mkl_api(int,dfdintegrateex1d,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], const MKL_INT *, const double [], const double [], double [], const MKL_INT *, const dfdIntegrCallBack , const void *, const dfdIntegrCallBack , const void *, const dfdIntegrCallBack , const void *, const dfdSearchCellsCallBack , const void *))
_MKL_API(int,DFDINTEGRATEEX1D,(DFTaskPtr *, const MKL_INT *, const MKL_INT *, const double [], const MKL_INT *, const double [], const MKL_INT *, const double [], const double [], double [], const MKL_INT *, const dfdIntegrCallBack , const void *, const dfdIntegrCallBack , const void *, const dfdIntegrCallBack , const void *, const dfdSearchCellsCallBack , const void *))


/*
//++
//  DF DESTRUCTOR FUNCTION DECLARATIONS.
//--
*/
_Mkl_Api(int,dfDeleteTask,(DFTaskPtr *))
_mkl_api(int,dfdeletetask,(DFTaskPtr *))
_MKL_API(int,DFDELETETASK,(DFTaskPtr *))

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __MKL_DF_FUNCTIONS_H__ */
