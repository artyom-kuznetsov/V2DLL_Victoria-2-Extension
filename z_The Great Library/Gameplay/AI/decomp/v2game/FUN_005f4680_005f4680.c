// state @ 005f4680 body=[[005f4680, 005f46a0]]


/* Library Function - Single Match
    public: struct _Mbstatet __thiscall std::fpos<struct _Mbstatet>::state(void)const 
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

undefined4 * __thiscall std::fpos<_Mbstatet>::state(fpos<_Mbstatet> *this)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000004;
  
  uVar1 = *(undefined4 *)(this + 0x14);
  *in_stack_00000004 = *(undefined4 *)(this + 0x10);
  in_stack_00000004[1] = uVar1;
  return in_stack_00000004;
}

