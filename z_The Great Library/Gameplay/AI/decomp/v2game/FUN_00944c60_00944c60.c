// FUN_00944c60 @ 00944c60 body=[[00944c60, 00944cd8] [00944cdc, 00944d5e] [00944d62, 00944d70]]


void FUN_00944c60(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int unaff_ESI;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  iVar1 = *(int *)(unaff_ESI + 0x6c);
  ExceptionList = &local_10;
  *(undefined4 *)(iVar1 + 0x38) = *in_ECX;
  *(undefined4 *)(iVar1 + 0x3c) = in_ECX[1];
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("wargoal_country_select",0x16);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x6c))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x6c) + 0x34);
  if (((*(int *)(iVar1 + 0xac) - *(int *)(iVar1 + 0xa8) & 0xfffffffcU) != 0) &&
     (*(char *)(iVar1 + 0x1dc) == '\0')) {
    FUN_009452a0();
    ExceptionList = local_10;
    return;
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("wargoal_setup",0xd);
  local_8 = 1;
  iVar1 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x6c))(local_48);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

