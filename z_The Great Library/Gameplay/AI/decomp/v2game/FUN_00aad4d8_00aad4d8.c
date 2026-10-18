// _Addstd @ 00aad4d8 body=[[00aad4d8, 00aad52c]]


/* Library Function - Single Match
    public: static void __cdecl std::ios_base::_Addstd(class std::ios_base *)
   
   Library: Visual Studio 2010 Release */

void __cdecl std::ios_base::_Addstd(ios_base *param_1)

{
  ios_base *piVar1;
  int iVar2;
  _Lockit local_8 [4];
  
  _Lockit::_Lockit(local_8,2);
  *(undefined4 *)(param_1 + 8) = 1;
  do {
    piVar1 = *(ios_base **)(*(int *)(param_1 + 8) * 4 + 0xf1f89c);
    if ((piVar1 == (ios_base *)0x0) || (piVar1 == param_1)) break;
    iVar2 = *(int *)(param_1 + 8);
    *(uint *)(param_1 + 8) = iVar2 + 1U;
  } while (iVar2 + 1U < 8);
  *(ios_base **)(*(int *)(param_1 + 8) * 4 + 0xf1f89c) = param_1;
  (&DAT_00f1f8c4)[*(int *)(param_1 + 8)] = (&DAT_00f1f8c4)[*(int *)(param_1 + 8)] + '\x01';
  FUN_00aad9f1();
  return;
}

