// FUN_0047e220 @ 0047e220 body=[[0047e220, 0047e2ea]]


void FUN_0047e220(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar6 = param_1;
  iVar5 = DAT_012587f4;
  param_1 = 0;
  if (0 < DAT_012587f4) {
    do {
      bVar3 = *(byte *)(param_2 + 8 + param_1);
      if (bVar3 != 0) {
        bVar4 = *(byte *)(param_1 + 8 + iVar6);
        if (bVar4 == 0) {
          *(char *)(param_1 + 8 + iVar6) =
               (char)(*(int *)(iVar6 + 0x4c) - *(int *)(iVar6 + 0x48) >> 3);
          __allmul(*(undefined4 *)(*(int *)(param_2 + 0x48) + (uint)bVar3 * 8),
                   *(undefined4 *)(*(int *)(param_2 + 0x48) + 4 + (uint)bVar3 * 8),param_3,param_4);
          FUN_00423920();
        }
        else {
          puVar1 = (uint *)(*(int *)(iVar6 + 0x48) + (uint)bVar4 * 8);
          lVar8 = __allmul(*(undefined4 *)(*(int *)(param_2 + 0x48) + (uint)bVar3 * 8),
                           *(undefined4 *)(*(int *)(param_2 + 0x48) + 4 + (uint)bVar3 * 8),param_3,
                           param_4);
          uVar7 = (uint)(lVar8 >> 0xf);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 + uVar7;
          puVar1[1] = puVar1[1] + (int)((ulonglong)(lVar8 >> 0xf) >> 0x20) +
                      (uint)CARRY4(uVar2,uVar7);
        }
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar5);
  }
  return;
}

