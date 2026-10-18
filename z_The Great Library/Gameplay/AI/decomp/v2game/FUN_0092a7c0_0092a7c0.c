// FUN_0092a7c0 @ 0092a7c0 body=[[0092a7c0, 0092a99c] [0092a9a0, 0092aad1]]


/* WARNING: Removing unreachable block (ram,0x0092a7e5) */
/* WARNING: Removing unreachable block (ram,0x0092a813) */

void FUN_0092a7c0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *local_18;
  
  iVar4 = param_4;
  if (*(int *)(in_EAX + 0x5c) != *(int *)(in_EAX + 0x60)) {
    *(int *)(in_EAX + 0x60) = *(int *)(in_EAX + 0x5c);
  }
  if (*(int *)(in_EAX + 0x4c) != *(int *)(in_EAX + 0x50)) {
    *(int *)(in_EAX + 0x50) = *(int *)(in_EAX + 0x4c);
  }
  if (*(char *)(in_EAX + 8) == '\0') {
    param_4 = param_2;
    param_2 = iVar4;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4) + 0xbe8) +
                           param_4 * 4) + 0x34);
  iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar4 == 0) {
    if (iVar2 == 0) {
      return;
    }
    iVar4 = FUN_00425a40();
    if (param_2 != *(int *)(iVar4 + 4)) {
      FUN_004d61d0();
      uVar7 = *(uint *)(iVar2 + 0x2c);
LAB_0092aa40:
      if ((*(uint *)(iVar2 + 0x2c) <= uVar7) && (uVar7 < *(uint *)(iVar2 + 0x30))) {
        iVar4 = *(int *)(in_EAX + 0x50);
        iVar5 = *(int *)(in_EAX + 0x4c);
        uVar3 = uVar7 + 8;
        if (iVar5 != iVar4) goto code_r0x0092aa5c;
        goto LAB_0092aa70;
      }
      FUN_004d61d0();
      uVar7 = *(uint *)(iVar2 + 0x3c);
LAB_0092aa90:
      if (uVar7 < *(uint *)(iVar2 + 0x3c)) {
        return;
      }
      if (*(uint *)(iVar2 + 0x40) <= uVar7) {
        return;
      }
      iVar4 = *(int *)(in_EAX + 0x60);
      iVar5 = *(int *)(in_EAX + 0x5c);
      uVar3 = uVar7 + 8;
      if (iVar5 != iVar4) goto code_r0x0092aaac;
      goto LAB_0092aac0;
    }
    FUN_004d61d0();
    uVar7 = *(uint *)(iVar2 + 0x2c);
LAB_0092a9a0:
    if ((*(uint *)(iVar2 + 0x2c) <= uVar7) && (uVar7 < *(uint *)(iVar2 + 0x30))) {
      iVar4 = *(int *)(in_EAX + 0x60);
      iVar5 = *(int *)(in_EAX + 0x5c);
      uVar3 = uVar7 + 8;
      if (iVar5 != iVar4) goto code_r0x0092a9c0;
      goto LAB_0092a9d3;
    }
    FUN_004d61d0();
    uVar7 = *(uint *)(iVar2 + 0x3c);
LAB_0092a9f0:
    if (uVar7 < *(uint *)(iVar2 + 0x3c)) {
      return;
    }
    if (*(uint *)(iVar2 + 0x40) <= uVar7) {
      return;
    }
    iVar4 = *(int *)(in_EAX + 0x50);
    iVar5 = *(int *)(in_EAX + 0x4c);
    uVar3 = uVar7 + 8;
    if (iVar5 != iVar4) goto code_r0x0092aa14;
    goto LAB_0092aa27;
  }
  uVar7 = *(uint *)(iVar4 + 0x30);
  puVar1 = (uint *)(iVar4 + 0x2c);
  uVar3 = *puVar1;
  if (uVar3 != uVar7) {
    do {
      if (*(int *)(uVar3 + 4) == param_2) break;
      uVar3 = uVar3 + 8;
    } while (uVar3 != uVar7);
    puVar6 = puVar1;
    local_18 = (uint *)(iVar4 + 0x3c);
    if (uVar3 != uVar7) goto LAB_0092a8ab;
  }
  puVar6 = (uint *)(iVar4 + 0x3c);
  local_18 = puVar1;
LAB_0092a8ab:
  uVar7 = *puVar6;
  if (*(int *)(uVar7 + 4) == param_2) {
    for (; (*puVar6 <= uVar7 && (uVar7 < puVar6[1])); uVar7 = uVar7 + 8) {
      FUN_004d61d0();
    }
  }
  else {
    FUN_004d61d0();
  }
  uVar7 = *local_18;
  if (*(int *)(uVar7 + 4) == param_4) {
    for (; (*local_18 <= uVar7 && (uVar7 < local_18[1])); uVar7 = uVar7 + 8) {
      FUN_004d61d0();
    }
  }
  else {
    FUN_004d61d0();
    for (uVar7 = *local_18; (*local_18 <= uVar7 && (uVar7 < local_18[1])); uVar7 = uVar7 + 8) {
      if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar7 + 4) * 4) + 0xcfc) ==
          param_4) {
        FUN_004d61d0();
      }
    }
  }
  return;
code_r0x0092aa5c:
  do {
    if (*(int *)(iVar5 + 4) == *(int *)(uVar7 + 4)) break;
    iVar5 = iVar5 + 8;
  } while (iVar5 != iVar4);
  uVar7 = uVar3;
  if (iVar5 == iVar4) {
LAB_0092aa70:
    FUN_004d61d0();
    uVar7 = uVar3;
  }
  goto LAB_0092aa40;
code_r0x0092aaac:
  do {
    if (*(int *)(iVar5 + 4) == *(int *)(uVar7 + 4)) break;
    iVar5 = iVar5 + 8;
  } while (iVar5 != iVar4);
  uVar7 = uVar3;
  if (iVar5 == iVar4) {
LAB_0092aac0:
    FUN_004d61d0();
    uVar7 = uVar3;
  }
  goto LAB_0092aa90;
code_r0x0092a9c0:
  do {
    if (*(int *)(iVar5 + 4) == *(int *)(uVar7 + 4)) break;
    iVar5 = iVar5 + 8;
  } while (iVar5 != iVar4);
  uVar7 = uVar3;
  if (iVar5 == iVar4) {
LAB_0092a9d3:
    FUN_004d61d0();
    uVar7 = uVar3;
  }
  goto LAB_0092a9a0;
code_r0x0092aa14:
  do {
    if (*(int *)(iVar5 + 4) == *(int *)(uVar7 + 4)) break;
    iVar5 = iVar5 + 8;
  } while (iVar5 != iVar4);
  uVar7 = uVar3;
  if (iVar5 == iVar4) {
LAB_0092aa27:
    FUN_004d61d0();
    uVar7 = uVar3;
  }
  goto LAB_0092a9f0;
}

