// FUN_00a55260 @ 00a55260 body=[[00a55260, 00a552ce] [00a552d2, 00a5532d] [00a55331, 00a55390] [00a55394, 00a553d1]]


void FUN_00a55260(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  uint local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b632b9;
  local_10 = ExceptionList;
  local_18 = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  cVar1 = FUN_00416db0();
  local_11 = cVar1 == '\0';
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if ((bool)local_11) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("ButtonEffect",0xc);
    local_8 = 1;
    uVar2 = FUN_009be510(param_1 + 0x6bcfc,in_ECX + 0xac,local_50,*(undefined4 *)(param_1 + 100));
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x124) = uVar2;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
  }
  local_8 = 0xffffffff;
  if (*(char *)(in_ECX + 0x4c) != '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 2;
    local_18 = 1;
    cVar1 = FUN_00416db0();
    local_11 = '\x01';
    if (cVar1 == '\0') goto LAB_00a55375;
  }
  local_11 = '\0';
LAB_00a55375:
  local_8 = 0xffffffff;
  if ((local_18 & 1) != 0) {
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
  }
  if (local_11 != '\0') {
    uVar2 = FUN_009bcbf0(in_ECX + 0x74,1);
    *(undefined4 *)(in_ECX + 0x90) = uVar2;
  }
  ExceptionList = local_10;
  return;
}

