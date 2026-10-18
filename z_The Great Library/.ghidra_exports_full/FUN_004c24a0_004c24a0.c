// FUN_004c24a0 @ 004c24a0 body=[[004c24a0, 004c2518]]


void FUN_004c24a0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_ESI;
  int unaff_EDI;
  longlong lVar4;
  uint local_10;
  int local_c;
  
  if (*(int *)(unaff_EDI + 0xc) == param_1) {
    FUN_004c1180();
    uVar2 = *unaff_ESI;
    *unaff_ESI = *unaff_ESI + local_10;
    unaff_ESI[1] = unaff_ESI[1] + local_c + (uint)CARRY4(uVar2,local_10);
    lVar4 = __allmul(*(undefined4 *)(unaff_EDI + 0x98),*(undefined4 *)(unaff_EDI + 0x9c),local_10,
                     local_c);
    uVar3 = (uint)(lVar4 >> 0xf);
    puVar1 = unaff_ESI + 2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    unaff_ESI[3] = unaff_ESI[3] + (int)((ulonglong)(lVar4 >> 0xf) >> 0x20) +
                   (uint)CARRY4(uVar2,uVar3);
    lVar4 = __allmul(*(undefined4 *)(unaff_EDI + 0x90),*(undefined4 *)(unaff_EDI + 0x94),local_10,
                     local_c);
    uVar3 = (uint)(lVar4 >> 0xf);
    puVar1 = unaff_ESI + 4;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    unaff_ESI[5] = unaff_ESI[5] + (int)((ulonglong)(lVar4 >> 0xf) >> 0x20) +
                   (uint)CARRY4(uVar2,uVar3);
  }
  return;
}

