// FUN_006bcc00 @ 006bcc00 body=[[006bcc00, 006bcd54] [006bcd58, 006bcd7f] [006bcd83, 006bce9f]]


void FUN_006bcc00(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *in_ECX;
  char *pcVar6;
  float fVar7;
  char local_74 [32];
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  float local_1c;
  int local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6e528;
  local_10 = ExceptionList;
  if (in_ECX[0x173] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX[0x173] + -8;
  }
  local_18 = *(int *)(iVar3 + 0x5c);
  fVar7 = 0.0;
  if (in_ECX[0x266] == 6) {
    fVar7 = *(float *)(*(int *)(local_18 + 0x350) + *(int *)(in_ECX[0x2aa] + 0x58) * 4);
  }
  else if (in_ECX[0x266] == 5) {
    fVar7 = *(float *)(local_18 + 0x6c);
  }
  local_1c = fVar7 * 57.295776 - 45.0;
  if (local_1c < 0.0) {
    local_1c = local_1c + 360.0;
  }
  local_14 = (local_1c / 360.0) * 6.2831855;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("nudge_rotation",0xe);
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  pcVar4 = __itoa((int)local_1c,local_74,10);
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
  local_8 = CONCAT31(local_8._1_3_,2);
  (**(code **)(*(int *)in_ECX[0x174] + 0x38))(local_54);
  FUN_009e7500();
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  local_8 = 0xffffffff;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  iVar3 = in_ECX[0x266];
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (iVar3 == 6) {
    *(float *)(*(int *)(local_18 + 0x350) + *(int *)(in_ECX[0x2aa] + 0x58) * 4) = local_14;
    if (in_ECX[0x173] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = in_ECX[0x173] + -8;
    }
    *(undefined1 *)(local_18 + 0x28) = 1;
    *(undefined1 *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a28) = 1;
  }
  else {
    if (iVar3 == 5) {
      iVar3 = *(int *)(local_18 + 0xb4);
      *(float *)(local_18 + 0x6c) = local_14;
      iVar5 = (**(code **)(*in_ECX + 0x38))();
      iVar2 = *(int *)(*(int *)(*(int *)(iVar5 + 0x20d8) + iVar3 * 4) + 8);
      FUN_007f18b0(iVar5 + 0x20bc,iVar3,iVar2 + 0x3c,*(undefined4 *)(iVar2 + 0x6c),
                   *(undefined4 *)(iVar2 + 0x70));
      ExceptionList = local_10;
      return;
    }
    if (iVar3 != 7) {
      ExceptionList = local_10;
      return;
    }
    *(float *)(local_18 + 0x1dc) = local_14;
    if (in_ECX[0x173] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = in_ECX[0x173] + -8;
    }
    *(undefined1 *)(local_18 + 0x28) = 1;
    *(undefined1 *)(*(int *)(in_ECX[0x2d] + 0x124) + 0x3a28) = 1;
  }
  FUN_006b6e70(in_ECX,iVar3);
  ExceptionList = local_10;
  return;
}

