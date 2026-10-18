// FUN_00547b70 @ 00547b70 body=[[00547b70, 00547bf7]]


uint FUN_00547b70(uint param_1)

{
  uint uVar1;
  int iVar2;
  basic_filebuf<char,std::char_traits<char>_> *in_ECX;
  
  uVar1 = **(uint **)(in_ECX + 0x20);
  if (((uVar1 != 0) && (**(uint **)(in_ECX + 0x10) < uVar1)) &&
     ((param_1 == 0xffffffff || (*(byte *)(uVar1 - 1) == param_1)))) {
    **(int **)(in_ECX + 0x30) = **(int **)(in_ECX + 0x30) + 1;
    **(int **)(in_ECX + 0x20) = **(int **)(in_ECX + 0x20) + -1;
    return -(uint)(param_1 != 0xffffffff) & param_1;
  }
  if ((*(FILE **)(in_ECX + 0x54) != (FILE *)0x0) && (param_1 != 0xffffffff)) {
    if ((*(int *)(in_ECX + 0x44) == 0) &&
       (iVar2 = __ungetc_nolock(param_1 & 0xff,*(FILE **)(in_ECX + 0x54)), iVar2 != -1)) {
      return param_1;
    }
    if ((basic_filebuf<char,std::char_traits<char>_> *)**(int **)(in_ECX + 0x20) != in_ECX + 0x48) {
      in_ECX[0x48] = SUB41(param_1,0);
      std::basic_filebuf<char,std::char_traits<char>_>::_Set_back(in_ECX);
      return param_1;
    }
  }
  return 0xffffffff;
}

