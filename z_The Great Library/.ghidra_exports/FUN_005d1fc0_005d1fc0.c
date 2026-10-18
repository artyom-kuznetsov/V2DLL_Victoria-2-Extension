// FUN_005d1fc0 @ 005d1fc0  (requested 005D1FC0, first bytes: 55 8B EC 83 E4 F8 64 A1)


void FUN_005d1fc0(void)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int *in_ECX;
  float afStack_54 [2];
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (in_ECX[0x42] == 0) {
    return;
  }
  ExceptionList = &local_14;
  if (in_ECX[0x43] != 0) {
    ExceptionList = &local_14;
    cVar3 = (**(code **)(*in_ECX + 0x3c))();
    if ((cVar3 == '\0') || (*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) == '\0')) {
      cVar3 = (**(code **)(*in_ECX + 0x40))();
      iVar1 = *(int *)(in_ECX[0x37] + 0x5c);
      if (cVar3 == '\0') {
        uStack_4c = *(undefined8 *)(iVar1 + 0x10c);
        uStack_44 = *(undefined4 *)(iVar1 + 0x114);
      }
      else {
        uStack_4c = *(undefined8 *)(iVar1 + 0x130);
        uStack_44 = *(undefined4 *)(iVar1 + 0x138);
      }
      (**(code **)(*(int *)in_ECX[0x43] + 0x168))(&uStack_4c);
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00e02d94,4);
    uStack_c = 0;
    (**(code **)(*(int *)in_ECX[0x43] + 0x124))(auStack_34,0);
    uStack_c = 0xffffffff;
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_34[0]);
    }
  }
  uStack_c = 0xffffffff;
  FUN_005d4420();
  if ((char)in_ECX[1] == '\0') goto LAB_005d21d4;
  cVar3 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar3 == '\0') {
LAB_005d2187:
    if ((int *)in_ECX[0x44] != (int *)0x0) {
      uStack_40 = *(undefined8 *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x10c);
      uStack_38 = *(undefined4 *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x114);
      (**(code **)(*(int *)in_ECX[0x44] + 0x168))(&uStack_40);
    }
  }
  else {
    iVar1 = *(int *)(in_ECX[0x37] + 0x5c);
    if (*(char *)(iVar1 + 0x2a) == '\0') goto LAB_005d2187;
    piVar4 = (int *)(**(code **)(*in_ECX + 0x70))(afStack_54,in_ECX[0x37]);
    afStack_54[0] = (float)(*piVar4 - *(int *)(iVar1 + 0x74));
    afStack_54[1] = 0.0;
    uStack_4c = CONCAT44(uStack_4c._4_4_,(float)(piVar4[1] - *(int *)(iVar1 + 0x78)));
    if ((int *)in_ECX[0x44] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x44] + 0x168))(afStack_54);
    }
    uVar2 = DAT_012588dc;
    iVar1 = *(int *)(in_ECX[0x37] + 0x58);
    iVar5 = (**(code **)(*(int *)in_ECX[0x42] + 0x38))();
    FUN_00643ce0(*(undefined4 *)(*(int *)(iVar5 + 0x20d8) + iVar1 * 4),in_ECX[0x37],uVar2);
  }
  FUN_005d4540(in_ECX,in_ECX + 0x4c);
  in_ECX[0x50] = 0;
LAB_005d21d4:
  FUN_004c8580(*(undefined4 *)(in_ECX[0x37] + 0x5c),in_ECX);
  if ((int *)in_ECX[0x43] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x43] + 0xb0))();
  }
  ExceptionList = local_14;
  return;
}

