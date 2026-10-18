// _Cons_val<std::allocator<std::_Container_proxy>,std::_Container_proxy,std::_Container_proxy> @ 0062fe10 body=[[0062fe10, 0062fe28]]


/* Library Function - Single Match
    void __cdecl std::_Cons_val<class std::allocator<struct std::_Container_proxy>,struct
   std::_Container_proxy,struct std::_Container_proxy>(class std::allocator<struct
   std::_Container_proxy> &,struct std::_Container_proxy *,struct std::_Container_proxy &&)
   
   Library: Visual Studio 2010 Release */

void __cdecl
std::_Cons_val<std::allocator<std::_Container_proxy>,std::_Container_proxy,std::_Container_proxy>
          (allocator<std::_Container_proxy> *param_1,_Container_proxy *param_2,
          _Container_proxy *param_3)

{
  if (param_2 != (_Container_proxy *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return;
}

