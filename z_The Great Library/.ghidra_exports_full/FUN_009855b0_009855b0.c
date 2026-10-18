// FUN_009855b0 @ 009855b0 body=[[009855b0, 009856c2] [009856c6, 0098578b] [0098578f, 00985818] [0098581e, 00985871] [00985875, 00985897]]


void FUN_009855b0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  int unaff_EDI;
  undefined8 uVar7;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  int local_38;
  int local_28;
  int local_24;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41e18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_28 = FUN_00868080();
  iVar6 = *(int *)(local_28 + 0x98) * 1000;
  iVar2 = *(int *)(local_28 + 0xa0) * 1000;
  if (iVar6 == 0) {
    iVar6 = -1;
  }
  else if (iVar2 + 0x189373U < 0x39580e) {
    iVar6 = (*(int *)(local_28 + 0xa0) * 1000000) / iVar6;
  }
  else {
    local_38 = iVar2 >> 0x1f;
    local_20 = iVar6 >> 0x1f;
    local_24 = iVar6;
    uVar7 = __allmul(iVar2,local_38,1000,0);
    iVar6 = __alldiv(uVar7,local_24,local_20);
    local_38 = iVar6 >> 0x1f;
  }
  uVar7 = __allmul(iVar6,iVar6 >> 0x1f,100000,0);
  iVar2 = __alldiv(uVar7,1000,0);
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("progress",8);
  local_8 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x44))(local_74);
  (**(code **)(*piVar3 + 0x48))(iVar2 / 1000);
  local_8 = 0xffffffff;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  iVar2 = *(int *)(*(int *)(unaff_EDI + 0x28) + 0x30) + -1;
  FUN_0099e240(iVar2);
  piVar3 = (int *)FUN_00868600(iVar2);
  if ((int *)*piVar3 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)*piVar3;
  }
  uVar4 = (uint)piVar3[2] >> 2;
  if (*(uint *)(iVar2 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar2 + 8);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  if (local_28 == *(int *)(*(int *)(*(int *)(iVar2 + 4) + uVar4 * 4) + (piVar3[2] & 3U) * 4)) {
    FUN_00409350("next_chapter",0xc);
    local_8 = 1;
    piVar3 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x34))(local_74);
    pcVar5 = *(code **)(*piVar3 + 0xbc);
  }
  else {
    FUN_00409350("next_chapter",0xc);
    local_8 = 2;
    piVar3 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x34))(local_74);
    pcVar5 = *(code **)(*piVar3 + 0xb8);
  }
  (*pcVar5)();
  local_8 = 0xffffffff;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  iVar2 = FUN_00868080();
  if (*(int *)(iVar2 + 0xa4) < 2) {
    iVar2 = FUN_00868080();
    local_28 = *(int *)(iVar2 + 0xa4) + 1;
    FUN_00868080();
    cVar1 = FUN_00867740();
    if (cVar1 != '\0') {
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      FUN_00409350("next_stage",10);
      local_8 = 3;
      piVar3 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x34))(local_74);
      (**(code **)(*piVar3 + 0xb8))();
      local_8 = 0xffffffff;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74[0]);
      }
      goto LAB_0098587e;
    }
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("next_stage",10);
  local_8 = 4;
  piVar3 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x20) + 0x34))(local_58);
  (**(code **)(*piVar3 + 0xbc))();
  local_8 = 0xffffffff;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
LAB_0098587e:
  local_8 = 0xffffffff;
  (**(code **)(**(int **)(unaff_EDI + 0x20) + 0x2c))();
  ExceptionList = local_10;
  return;
}

