// FUN_004ef1b0 @ 004ef1b0 body=[[004ef1b0, 004ef237]]


void FUN_004ef1b0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  uint *unaff_ESI;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  int local_8;
  
  local_8 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 4;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  if (0 < local_8) {
    piVar4 = (int *)(*(int *)(in_ECX + 0x10) + 8);
    do {
      iVar1 = *(int *)(*piVar4 + 0x68);
      if (*(char *)(iVar1 + 0x3d9) == '\0') {
        uVar2 = piVar4[1];
        uVar5 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0xc3500000,0);
        lVar6 = __allmul(uVar5,*(undefined4 *)(iVar1 + 800),*(undefined4 *)(iVar1 + 0x324));
        uVar3 = (uint)(lVar6 >> 0xf);
        uVar2 = *unaff_ESI;
        *unaff_ESI = *unaff_ESI + uVar3;
        unaff_ESI[1] = unaff_ESI[1] + (int)((ulonglong)(lVar6 >> 0xf) >> 0x20) +
                       (uint)CARRY4(uVar2,uVar3);
      }
      piVar4 = piVar4 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

