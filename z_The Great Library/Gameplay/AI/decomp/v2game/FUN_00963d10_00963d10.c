// FUN_00963d10 @ 00963d10 body=[[00963d10, 00963e4a]]


void FUN_00963d10(int param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(char *)(*(int *)(param_1 + 0x68) + 0x2c) == '\0') {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    return;
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 100) + 300) * 4);
  uVar2 = *(uint *)(param_1 + 0x58);
  iVar3 = *(int *)(*(int *)(param_1 + 0x68) + 0x3c);
  uVar5 = ((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11;
  lVar7 = CONCAT44(uVar5,uVar2 << 0xf);
  if (iVar3 == 1) {
    uVar4 = *(uint *)(*(int *)(iVar1 + 0xa60) + 0x110);
LAB_00963d92:
    uVar6 = __alldiv(uVar4 << 0x1e,((int)uVar4 >> 0x1f) << 0x1e | uVar4 >> 2,0x1f40000,0);
    lVar7 = __allmul(uVar6,uVar2 << 0xf,uVar5);
    lVar7 = lVar7 >> 0xf;
  }
  else {
    if (iVar3 == 2) {
      uVar4 = *(uint *)(*(int *)(iVar1 + 0xa60) + 0x108);
      goto LAB_00963d92;
    }
    if (iVar3 == 0) {
      uVar4 = *(uint *)(*(int *)(iVar1 + 0xa60) + 0x118);
      goto LAB_00963d92;
    }
  }
  if (*(char *)(iVar1 + 0xb68) == '\0') {
    if ((*(char *)(iVar1 + 0xb70) == '\0') || (*(char *)(param_1 + 0x4c) != '\0'))
    goto LAB_00963e21;
  }
  else {
    if (*(int *)(iVar1 + 0xe64) == *(int *)(param_1 + 0x6c)) goto LAB_00963e21;
    if (*(char *)(param_1 + 0x4c) == '\0') {
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)((int)param_2 + 4) = 0;
      return;
    }
  }
  lVar7 = __alldiv(lVar7 << 0xf,0x10000,0);
LAB_00963e21:
  *param_2 = lVar7;
  return;
}

