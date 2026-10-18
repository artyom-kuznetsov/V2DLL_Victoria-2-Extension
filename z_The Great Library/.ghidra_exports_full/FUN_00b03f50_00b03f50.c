// FUN_00b03f50 @ 00b03f50 body=[[00b03f50, 00b03fdc]]


void FUN_00b03f50(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined4 *puVar6;
  int *in_ECX;
  uint uVar7;
  
  uVar5 = *(ushort *)(in_ECX + 1);
  if (uVar5 != 0) {
    puVar6 = (undefined4 *)*in_ECX;
    fVar1 = (float)puVar6[(uint)uVar5 * 4 + -1];
    if (uVar5 == 0) {
      puVar6 = (undefined4 *)0x0;
    }
    uVar2 = *puVar6;
    uVar7 = uVar5 + 1;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    *(short *)(in_ECX + 1) = (short)uVar7;
    FUN_00b00820(uVar7 & 0xffff);
    puVar6 = (undefined4 *)((uint)(ushort)((short)in_ECX[1] - 1) * 0x10 + *in_ECX);
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = uVar2;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = fVar1 + param_1;
    }
    FUN_00b00600();
  }
  return;
}

