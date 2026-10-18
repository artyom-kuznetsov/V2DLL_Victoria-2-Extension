// FUN_00873af0 @ 00873af0 body=[[00873af0, 00873b71]]


void FUN_00873af0(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined **local_10 [3];
  
  iVar2 = DAT_013f3640;
  iVar3 = FUN_008740f0(DAT_013f3640);
  if (iVar3 == 0) {
    param_1 = "Trying to use unregistered class";
    std::exception::exception((exception *)local_10,&param_1);
    local_10[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_10,&DAT_00e6fb74);
  }
  piVar4 = (int *)FUN_00aa99b0();
  piVar1 = piVar4 + 2;
  if (piVar1 != (int *)0x0) {
    piVar4[3] = iVar3;
    *(undefined1 *)(piVar4 + 4) = 1;
    *piVar1 = (int)luabind::detail::pointer_holder<CFixedPoint_const*,void_const_>::vftable;
    piVar4[5] = (int)param_1;
    piVar4[6] = 0;
    piVar4[7] = iVar2;
    piVar4[8] = (int)param_1;
  }
  *piVar4 = (int)piVar1;
  return;
}

