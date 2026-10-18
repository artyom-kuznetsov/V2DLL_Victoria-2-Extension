// FUN_006f9370 @ 006f9370 body=[[006f9370, 006f93e9] [006f93ed, 006f93fa]]


void FUN_006f9370(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *unaff_EDI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00e0f2e4,2);
  local_8 = 0;
  piVar3 = (int *)(**(code **)(*(int *)unaff_EDI[8] + 0x34))(local_2c);
  iVar1 = *piVar3;
  cVar2 = (**(code **)(*unaff_EDI + 0x18))();
  (**(code **)(iVar1 + 0x48))((cVar2 != '\0') + '\x01');
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

