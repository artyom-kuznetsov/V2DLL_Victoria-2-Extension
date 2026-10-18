// FUN_00b070a0 @ 00b070a0 body=[[00b070a0, 00b0716f]]


void FUN_00b070a0(float param_1)

{
  undefined4 *puVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  int *piVar5;
  int *in_ECX;
  uint uVar6;
  uint uVar7;
  undefined2 local_c;
  undefined4 local_8;
  
  uVar4 = in_ECX[0x12];
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      piVar5 = *(int **)(in_ECX[0x11] + uVar7 * 4);
      uVar3 = *(ushort *)(piVar5 + 1);
      if (uVar3 != 0) {
        fVar2 = *(float *)(*piVar5 + -4 + (uint)uVar3 * 8);
        uVar6 = uVar3 + 1;
        local_c = (undefined2)(int)ROUND((float)*(ushort *)*piVar5 * 1.5259022e-05 * 65535.0);
        local_8 = CONCAT22(local_8._2_2_,local_c);
        *(short *)(piVar5 + 1) = (short)uVar6;
        FUN_00adca40(uVar6 & 0xffff);
        puVar1 = (undefined4 *)(*piVar5 + (uint)(ushort)((short)piVar5[1] - 1) * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = local_8;
          puVar1[1] = fVar2 + param_1;
        }
        FUN_00b00560();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  (**(code **)(*in_ECX + 0x18))();
  return;
}

