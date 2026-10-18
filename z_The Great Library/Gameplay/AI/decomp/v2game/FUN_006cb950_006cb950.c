// _Allocate<> @ 006cb950 body=[[006cb950, 006cb9ab]]


/* Library Function - Multiple Matches With Same Base Name
    struct std::_Container_proxy * __cdecl std::_Allocate<struct std::_Container_proxy>(unsigned
   int,struct std::_Container_proxy *)
    class std::tr1::_Impl_no_alloc1<struct std::tr1::_Callable_fun<bool (__cdecl*const)(enum
   Concurrency::agent_status const &),0>,bool,enum Concurrency::agent_status const &> * __cdecl
   std::_Allocate<class std::tr1::_Impl_no_alloc1<struct std::tr1::_Callable_fun<bool
   (__cdecl*const)(enum Concurrency::agent_status const &),0>,bool,enum Concurrency::agent_status
   const &> >(unsigned int,class std::tr1::_Impl_no_alloc1<struct std::tr1::_Callable_fun<bool
   (__cdecl*const)(enum Concurrency::agent_status const &),0>,bool,enum Concurrency::agent_status
   const &> *)
    class std::tr1::_Impl_no_alloc1<struct std::tr1::_Callable_obj<class Concurrency::`anonymous
   namespace'::<lambda0>,0>,void,unsigned int const &> * __cdecl std::_Allocate<class
   std::tr1::_Impl_no_alloc1<struct std::tr1::_Callable_obj<class Concurrency::`anonymous
   namespace'::<lambda0>,0>,void,unsigned int const &> >(unsigned int,class
   std::tr1::_Impl_no_alloc1<struct std::tr1::_Callable_obj<class Concurrency::`anonymous
   namespace'::<lambda0>,0>,void,unsigned int const &> *)
    class std::tr1::_Impl_no_alloc1<struct std::tr1::_Callable_obj<class Concurrency::`anonymous
   namespace'::<lambda1>,0>,void,class Concurrency::message<unsigned int> *> * __cdecl
   std::_Allocate<class std::tr1::_Impl_no_alloc1<struct std::tr1::_Callable_obj<class
   Concurrency::`anonymous namespace'::<lambda1>,0>,void,class Concurrency::message<unsigned int> *>
   >(unsigned int,class std::tr1::_Impl_no_alloc1<struct std::tr1::_Callable_obj<class
   Concurrency::`anonymous namespace'::<lambda1>,0>,void,class Concurrency::message<unsigned int> *>
   *)
     7 names - too many to list
   
   Libraries: Visual Studio 2010 Debug, Visual Studio 2010 Release */

int _Allocate<>(uint param_1)

{
  undefined1 local_14 [12];
  int local_8;
  
  local_8 = 0;
  if ((param_1 != 0) &&
     ((0x3fffffff < param_1 || (local_8 = FUN_00aae9af(param_1 << 2), local_8 == 0)))) {
    FUN_00401050(0);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_14,&DAT_00e6fb20);
  }
  return local_8;
}

