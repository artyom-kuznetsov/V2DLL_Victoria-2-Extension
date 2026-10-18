// FUN_004f56b0 @ 004f56b0 body=[[004f56b0, 004f5745]]


void FUN_004f56b0(void)

{
  uint *puVar1;
  uint uVar2;
  int unaff_ESI;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(unaff_ESI + 0x218);
  if ((int)uVar2 < 1) {
    *(undefined4 *)(unaff_ESI + 0x170) = 0;
    *(undefined4 *)(unaff_ESI + 0x174) = 0;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0x184) = 0;
  if (uVar2 == 1) {
    uVar3 = *(undefined8 *)(unaff_ESI + 0x210);
    *(undefined4 *)(unaff_ESI + 0x210) = 0;
    *(undefined4 *)(unaff_ESI + 0x214) = 0;
    *(undefined4 *)(unaff_ESI + 0x218) = 0;
  }
  else {
    uVar3 = __alldiv(*(uint *)(unaff_ESI + 0x210) << 0xf,
                     *(int *)(unaff_ESI + 0x214) << 0xf | *(uint *)(unaff_ESI + 0x210) >> 0x11,
                     uVar2 << 0xf,((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11);
    puVar1 = (uint *)(unaff_ESI + 0x210);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - (uint)uVar3;
    *(int *)(unaff_ESI + 0x214) =
         (*(int *)(unaff_ESI + 0x214) - (int)((ulonglong)uVar3 >> 0x20)) -
         (uint)(uVar2 < (uint)uVar3);
    *(int *)(unaff_ESI + 0x218) = *(int *)(unaff_ESI + 0x218) + -1;
  }
  puVar1 = (uint *)(unaff_ESI + 0x150);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (uint)uVar3;
  *(int *)(unaff_ESI + 0x154) =
       *(int *)(unaff_ESI + 0x154) + (int)((ulonglong)uVar3 >> 0x20) +
       (uint)CARRY4(uVar2,(uint)uVar3);
  *(undefined8 *)(unaff_ESI + 0x170) = uVar3;
  return;
}

