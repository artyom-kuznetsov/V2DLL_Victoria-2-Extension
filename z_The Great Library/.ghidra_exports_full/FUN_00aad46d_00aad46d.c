// _Callfns @ 00aad46d body=[[00aad46d, 00aad493]]


/* Library Function - Single Match
    private: void __thiscall std::ios_base::_Callfns(enum std::ios_base::event)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void __thiscall std::ios_base::_Callfns(ios_base *this,event param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)(this + 0x2c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_1,this,puVar1[1]);
  }
  return;
}

