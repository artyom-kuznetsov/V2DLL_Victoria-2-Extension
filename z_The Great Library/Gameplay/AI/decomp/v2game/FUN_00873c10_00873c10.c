// FUN_00873c10 @ 00873c10 body=[[00873c10, 00873ca4]]


void FUN_00873c10(char *param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined **local_18 [3];
  int local_c;
  int local_8;
  
  pcVar2 = param_1;
  FUN_00874320(&local_c,param_1,param_1);
  iVar3 = FUN_008741d0(local_c);
  if (iVar3 == 0) {
    param_1 = "Trying to use unregistered class";
    std::exception::exception((exception *)local_18,&param_1);
    local_18[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_18,&DAT_00e6fb74);
  }
  piVar4 = (int *)FUN_00aa99b0();
  piVar1 = piVar4 + 2;
  if (piVar1 != (int *)0x0) {
    piVar4[7] = local_c;
    piVar4[3] = iVar3;
    *(undefined1 *)(piVar4 + 4) = 0;
    *piVar1 = (int)luabind::detail::pointer_holder<CProvince*,void_const_>::vftable;
    piVar4[5] = (int)pcVar2;
    piVar4[6] = 0;
    piVar4[8] = local_8;
  }
  *piVar4 = (int)piVar1;
  return;
}

