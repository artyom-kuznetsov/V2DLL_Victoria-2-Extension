// FUN_009e3990 @ 009e3990 body=[[009e3990, 009e3b9d]]


void FUN_009e3990(void)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int *in_ECX;
  undefined4 uStack_14;
  undefined1 local_10 [12];
  
  if (((short)in_ECX[0x9a] != 0) && ((int *)in_ECX[0x98] != (int *)0x0)) {
    if ((in_ECX[0x96] == 0) && (in_ECX[0x97] == 0)) {
      piVar3 = (int *)(**(code **)(*(int *)in_ECX[0x98] + 0x4c))(local_10);
      in_ECX[0x96] = *piVar3;
      in_ECX[0x97] = piVar3[1];
    }
    puVar4 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x98] + 0x4c))(local_10);
    uVar2 = *puVar4;
    iVar7 = in_ECX[0x96];
    iVar5 = (**(code **)(*(int *)in_ECX[0x98] + 0x4c))(&uStack_14);
    *(short *)((int)in_ECX + 0x252) =
         *(short *)((int)in_ECX + 0x252) + ((short)*(undefined4 *)(iVar5 + 4) - (short)in_ECX[0x97])
    ;
    sVar1 = *(short *)((int)in_ECX + 0x26a);
    *(short *)(in_ECX + 0x94) = (short)in_ECX[0x94] + ((short)uVar2 - (short)iVar7);
    if ((int)(short)in_ECX[0x94] + (int)sVar1 < 1) {
      *(short *)(in_ECX + 0x94) = -sVar1;
    }
    if ((int)*(short *)((int)in_ECX + 0x252) + (int)sVar1 < 1) {
      *(short *)((int)in_ECX + 0x252) = -sVar1;
    }
    if ((short)in_ECX[0x9a] != 0) {
      iVar7 = *(int *)(in_ECX[0x24] + 0x6b9bc);
      uStack_14 = *(undefined4 *)(in_ECX[0x24] + 0x6b9c0);
      psVar6 = (short *)(**(code **)(*in_ECX + 0x60))(&stack0xffffffe8);
      if (iVar7 <= ((int)(short)in_ECX[0x94] - (int)*(short *)((int)in_ECX + 0x26a)) + (int)*psVar6)
      {
        uVar2 = *(undefined4 *)(in_ECX[0x24] + 0x6b9bc);
        psVar6 = (short *)(**(code **)(*in_ECX + 0x60))(&stack0xffffffe4);
        *(short *)(in_ECX + 0x94) = (*(short *)((int)in_ECX + 0x26a) - *psVar6) + (short)uVar2;
      }
      iVar7 = *(int *)(in_ECX[0x24] + 0x6b9c0);
      iVar5 = (**(code **)(*in_ECX + 0x60))(&stack0xffffffe4);
      if (iVar7 <= ((int)*(short *)(iVar5 + 2) - (int)*(short *)((int)in_ECX + 0x26a)) +
                   (int)*(short *)((int)in_ECX + 0x252)) {
        uVar2 = *(undefined4 *)(in_ECX[0x24] + 0x6b9c0);
        iVar7 = (**(code **)(*in_ECX + 0x60))(&stack0xffffffe8);
        *(short *)((int)in_ECX + 0x252) =
             (*(short *)((int)in_ECX + 0x26a) - *(short *)(iVar7 + 2)) + (short)uVar2;
      }
    }
    piVar3 = (int *)(**(code **)(*(int *)in_ECX[0x98] + 0x4c))(&stack0xffffffe8);
    in_ECX[0x96] = *piVar3;
    in_ECX[0x97] = piVar3[1];
    (**(code **)(*in_ECX + 0x18))(in_ECX[0x94]);
  }
  return;
}

