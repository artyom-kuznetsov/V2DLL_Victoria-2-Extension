// __except_handler4 @ 00ab7270 body=[[00ab7270, 00ab73fe]]


/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2010 Release */

undefined4 __except_handler4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  piVar5 = (int *)(*(uint *)(param_2 + 8) ^ DAT_00ef259c);
  local_5 = '\0';
  local_10 = 1;
  iVar1 = param_2 + 0x10;
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  iVar4 = param_2;
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    *(int ***)(param_2 + -4) = &local_1c;
    iVar4 = *(int *)(param_2 + 0xc);
    local_1c = param_1;
    local_18 = param_3;
    if (iVar4 == -2) {
      return local_10;
    }
    do {
      local_14 = piVar5 + iVar4 * 3 + 4;
      local_c = *local_14;
      if (piVar5[iVar4 * 3 + 5] != 0) {
        iVar2 = _EH4_CallFilterFunc(piVar5[iVar4 * 3 + 5],iVar1);
        local_5 = '\x01';
        if (iVar2 < 0) {
          local_10 = 0;
          goto LAB_00ab7318;
        }
        if (0 < iVar2) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar3 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_00dd94f0)
             , BVar3 != 0)) {
            ___DestructExceptionObject(param_1,1);
          }
          _EH4_GlobalUnwind2(param_2,param_1);
          if (*(int *)(param_2 + 0xc) != iVar4) {
            _EH4_LocalUnwind(param_2,iVar4,iVar1,&DAT_00ef259c);
          }
          *(int *)(param_2 + 0xc) = local_c;
          if (*piVar5 != -2) {
            __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
          }
          __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
          _EH4_TransferToHandler(local_14[2],iVar1);
          goto LAB_00ab73df;
        }
      }
      iVar4 = local_c;
    } while (local_c != -2);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
LAB_00ab73df:
    if (*(int *)(iVar4 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind(iVar4,0xfffffffe,iVar1,&DAT_00ef259c);
  }
LAB_00ab7318:
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  return local_10;
}

