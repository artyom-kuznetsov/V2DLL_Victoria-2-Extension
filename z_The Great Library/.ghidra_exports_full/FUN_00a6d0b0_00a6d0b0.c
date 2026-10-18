// FUN_00a6d0b0 @ 00a6d0b0 body=[[00a6d0b0, 00a6d460]]


void FUN_00a6d0b0(void)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  undefined1 *puVar7;
  int *piStack_64;
  undefined1 **ppuStack_60;
  undefined1 **ppuStack_5c;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 **ppuStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 local_10 [12];
  
  *(undefined1 *)(in_ECX + 0xa7) = 1;
  if (*(char *)((int)in_ECX + 0x29e) == '\0') {
    *(undefined1 *)((int)in_ECX + 0x29e) = 1;
    puStack_2c = local_10;
    puStack_30 = (undefined1 *)0xa6d0eb;
    (**(code **)(*(int *)in_ECX[0x79] + 0x4c))();
    puStack_30 = auStack_14;
    puStack_34 = (undefined1 *)0xa6d0fd;
    (**(code **)(*(int *)in_ECX[0x79] + 0x4c))();
    if ((in_ECX[0x73] == 0) && (in_ECX[0x74] == 0)) {
      puStack_34 = auStack_18;
      puStack_38 = (undefined1 *)0xa6d121;
      piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x79] + 0x4c))();
      in_ECX[0x73] = *piVar2;
      in_ECX[0x74] = piVar2[1];
    }
    puStack_34 = auStack_18;
    puStack_38 = (undefined1 *)0xa6d144;
    piVar2 = (int *)(**(code **)(*(int *)in_ECX[0x79] + 0x4c))();
    iVar6 = *piVar2;
    iVar5 = in_ECX[0x73];
    puStack_38 = auStack_1c;
    puStack_3c = (undefined1 *)0xa6d15e;
    iVar3 = (**(code **)(*(int *)in_ECX[0x79] + 0x4c))();
    puVar7 = (undefined1 *)(*(int *)(iVar3 + 4) - in_ECX[0x74]);
    puStack_3c = &stack0xffffffdc;
    puStack_40 = (undefined1 *)0xa6d180;
    puStack_2c = puVar7;
    psVar4 = (short *)(**(code **)(*(int *)in_ECX[0x6f] + 0xf4))();
    if ((int)(uint)*(ushort *)(in_ECX + 0x97) < (int)*psVar4 + (iVar6 - iVar5)) {
      puStack_40 = &stack0xffffffd8;
      puStack_44 = (undefined1 *)0xa6d1a9;
      iVar3 = (**(code **)(*(int *)in_ECX[0x6f] + 0xf4))();
      if ((int)(uint)*(ushort *)((int)in_ECX + 0x25e) < (int)(puVar7 + *(short *)(iVar3 + 2))) {
        iVar3 = *(int *)(in_ECX[0x1b] + 0x6b9bc);
        puStack_40 = &stack0xffffffd8;
        puStack_44 = (undefined1 *)0xa6d1ea;
        psVar4 = (short *)(**(code **)(*(int *)in_ECX[0x6f] + 0xf4))();
        if ((int)*psVar4 + (int)(short)in_ECX[0x71] + (iVar6 - iVar5) < iVar3 + -5) {
          iVar6 = *(int *)(in_ECX[0x1b] + 0x6b9c0);
          puStack_40 = &stack0xffffffd8;
          puStack_44 = (undefined1 *)0xa6d233;
          iVar5 = (**(code **)(*(int *)in_ECX[0x6f] + 0xf4))();
          if ((int)(puVar7 + (int)*(short *)((int)in_ECX + 0x1c6) + (int)*(short *)(iVar5 + 2)) <
              iVar6 + -5) {
            piVar2 = (int *)in_ECX[0x6f];
            puStack_40 = &stack0xffffffd8;
            puStack_44 = (undefined1 *)0xa6d268;
            puStack_30 = (undefined1 *)(**(code **)(*piVar2 + 0xf4))();
            puStack_44 = &stack0xffffffd8;
            ppuStack_48 = (undefined1 **)0xa6d27d;
            (**(code **)(*piVar2 + 0xf4))();
            ppuStack_48 = (undefined1 **)in_ECX[0x6f];
            uStack_4c = 0xa6d29c;
            FUN_00a70af0();
            *(undefined1 *)(in_ECX + 0xa7) = 1;
            ppuStack_48 = &puStack_2c;
            puStack_34 = (undefined1 *)0x3e8;
            uStack_4c = 0xa6d2c0;
            iVar6 = (**(code **)(*(int *)in_ECX[0x6f] + 0xf4))();
            puStack_3c = (undefined1 *)(*(short *)(iVar6 + 2) * 1000);
            iVar6 = *(int *)(in_ECX[0xa5] + 0x54);
            ppuStack_5c = &puStack_38;
            puStack_34 = (undefined1 *)0x0;
            ppuStack_60 = (undefined1 **)0xa6d2f6;
            FUN_0043d130();
            ppuStack_5c = (undefined1 **)0xa6d304;
            (**(code **)(iVar6 + 0x14))();
            ppuStack_5c = &puStack_40;
            ppuStack_60 = (undefined1 **)0xa6d319;
            iVar6 = (**(code **)(*(int *)in_ECX[0x6f] + 0xf4))();
            sVar1 = *(short *)(iVar6 + 2);
            piStack_64 = (int *)0xa6d323;
            iVar6 = FUN_00a6ece0();
            ppuStack_48 = (undefined1 **)0x3e8;
            if (sVar1 < iVar6) {
              ppuStack_60 = &puStack_44;
              piStack_64 = (int *)0xa6d344;
              iVar6 = (**(code **)(*(int *)in_ECX[0x6f] + 0xf4))();
              sVar1 = *(short *)(iVar6 + 2);
              piStack_64 = in_ECX;
              iStack_50 = FUN_00a6ece0();
              iStack_50 = iStack_50 - sVar1;
            }
            else {
              ppuStack_60 = &puStack_44;
              piStack_64 = (int *)0xa6d361;
              iVar6 = (**(code **)(*(int *)in_ECX[0x6f] + 0xf4))();
              iStack_50 = (int)*(short *)(iVar6 + 2);
            }
            iStack_50 = iStack_50 * 1000;
            iVar6 = *(int *)(in_ECX[0xa5] + 0x54);
            uStack_54 = 0;
            FUN_0043d130(&uStack_4c);
            (**(code **)(iVar6 + 0x14))();
            psVar4 = (short *)(**(code **)(*(int *)in_ECX[0x6f] + 0xf4))(auStack_58);
            sVar1 = *psVar4;
            iVar6 = FUN_00a6eb10(in_ECX);
            ppuStack_60 = (undefined1 **)0x3e8;
            if (sVar1 < iVar6) {
              (**(code **)(*(int *)in_ECX[0x6f] + 0xf4))(&ppuStack_5c);
              FUN_00a6eb10(in_ECX);
            }
            else {
              (**(code **)(*(int *)in_ECX[0x6f] + 0xf4))(&ppuStack_5c);
            }
            iVar6 = *(int *)(in_ECX[0xa6] + 0x54);
            FUN_0043d130(&piStack_64);
            (**(code **)(iVar6 + 0x14))();
          }
        }
      }
    }
    puStack_40 = (undefined1 *)in_ECX[0x71];
    puStack_44 = (undefined1 *)0xa6d453;
    (**(code **)(*in_ECX + 0x18))();
    puStack_44 = (undefined1 *)0xa6d45a;
    FUN_00a6ded0();
  }
  return;
}

