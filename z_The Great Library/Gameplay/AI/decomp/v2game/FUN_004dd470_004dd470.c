// FUN_004dd470 @ 004dd470 body=[[004dd470, 004dd5d2]]


void FUN_004dd470(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_EAX;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = __allmul(*(undefined4 *)(in_EAX + 0x30),*(undefined4 *)(in_EAX + 0x34),
                   *(undefined4 *)(in_EAX + 0x20),*(undefined4 *)(in_EAX + 0x24));
  lVar8 = __allmul(lVar8 >> 0xf,param_4 << 0xf,((int)param_4 >> 0x1f) << 0xf | param_4 >> 0x11);
  FUN_0047dbb0(param_2,param_1 + 0x24);
  FUN_0047de60(param_2,lVar8 >> 0xf);
  param_4 = 0;
  if (0 < DAT_012587f4) {
    do {
      uVar7 = (uint)*(byte *)(param_1 + 0x98 + param_4);
      iVar2 = *(int *)(*(int *)(param_1 + 0xd8) + uVar7 * 8);
      iVar3 = *(int *)(*(int *)(param_1 + 0xd8) + 4 + uVar7 * 8);
      if (iVar2 != 0 || iVar3 != 0) {
        bVar1 = *(byte *)(param_4 + 8 + param_2);
        iVar4 = *(int *)(param_2 + 0x48);
        uVar5 = *(undefined4 *)(iVar4 + (uint)bVar1 * 8);
        uVar6 = *(undefined4 *)(iVar4 + 4 + (uint)bVar1 * 8);
        lVar9 = __allmul(iVar2,iVar3,param_5,param_6);
        lVar9 = __allmul(lVar9 >> 0xf,lVar8 >> 0xf);
        lVar9 = (lVar9 >> 0xf) + CONCAT44(uVar6,uVar5);
        if (bVar1 == 0) {
          *(char *)(param_4 + 8 + param_2) = (char)(*(int *)(param_2 + 0x4c) - iVar4 >> 3);
          FUN_00423920();
        }
        else {
          *(int *)(iVar4 + (uint)bVar1 * 8) = (int)lVar9;
          *(int *)(iVar4 + 4 + (uint)bVar1 * 8) = (int)((ulonglong)lVar9 >> 0x20);
        }
      }
      param_4 = param_4 + 1;
    } while ((int)param_4 < DAT_012587f4);
  }
  FUN_0047dca0(param_3);
  FUN_0047d9e0(param_2,0xc34f8000,0);
  return;
}

