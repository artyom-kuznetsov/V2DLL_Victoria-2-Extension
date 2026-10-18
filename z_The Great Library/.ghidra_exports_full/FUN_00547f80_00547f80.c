// FUN_00547f80 @ 00547f80 body=[[00547f80, 0054805d]]


void FUN_00547f80(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  basic_filebuf<char,std::char_traits<char>_> *in_ECX;
  int unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = param_5;
  local_10 = param_4;
  if ((((*(int *)(in_ECX + 0x54) != 0) && (cVar2 = FUN_00548cc0(), cVar2 != '\0')) &&
      (iVar3 = _fsetpos(*(FILE **)(in_ECX + 0x54),(fpos_t *)&local_10), iVar3 == 0)) &&
     (((param_2 == 0 && param_3 == 0 ||
       (iVar3 = __fseeki64_nolock(*(FILE **)(in_ECX + 0x54),CONCAT44(1,param_3),unaff_EDI),
       iVar3 == 0)) && (iVar3 = _fgetpos(*(FILE **)(in_ECX + 0x54),(fpos_t *)&local_10), iVar3 == 0)
      ))) {
    *(undefined4 *)(in_ECX + 0x4c) = param_6;
    std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back(in_ECX);
    param_1[2] = local_10;
    uVar1 = *(undefined4 *)(in_ECX + 0x4c);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = local_c;
    param_1[4] = uVar1;
    return;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

