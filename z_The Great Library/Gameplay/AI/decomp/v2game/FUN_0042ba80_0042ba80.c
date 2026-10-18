// FUN_0042ba80 @ 0042ba80 body=[[0042ba80, 0042baf2]]


uint FUN_0042ba80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint *in_ECX;
  undefined4 *puVar5;
  uint *unaff_ESI;
  
  puVar1 = (undefined4 *)unaff_ESI[1];
  puVar3 = (uint *)((int)puVar1 - (int)*unaff_ESI);
  if (((uint)puVar3 & 0xfffffff8) != 0) {
    puVar3 = (uint *)in_ECX[1];
    puVar5 = (undefined4 *)*in_ECX;
    if (((undefined4 *)*puVar3 <= puVar5) && (puVar5 < (undefined4 *)puVar3[1])) {
      puVar4 = puVar1 + -2;
      puVar2 = puVar5;
      if (puVar5 == puVar4) {
        if ((undefined4 *)*unaff_ESI != puVar1) {
          unaff_ESI[1] = (uint)(puVar1 + -2);
          return CONCAT31((int3)((uint)puVar4 >> 8),1);
        }
      }
      else {
        while (puVar4 = puVar2 + 2, puVar4 != puVar1) {
          *puVar5 = *puVar4;
          puVar5[1] = puVar2[3];
          puVar5 = puVar5 + 2;
          puVar2 = puVar4;
        }
        puVar4 = (undefined4 *)unaff_ESI[1];
        if ((((int)puVar4 - (int)*unaff_ESI & 0xfffffff8U) != 0) &&
           ((undefined4 *)*unaff_ESI != puVar4)) {
          puVar4 = puVar4 + -2;
          unaff_ESI[1] = (uint)puVar4;
        }
      }
      return CONCAT31((int3)((uint)puVar4 >> 8),1);
    }
  }
  return (uint)puVar3 & 0xffffff00;
}

