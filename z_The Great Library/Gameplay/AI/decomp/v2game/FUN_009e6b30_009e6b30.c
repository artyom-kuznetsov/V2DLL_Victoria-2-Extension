// FUN_009e6b30 @ 009e6b30 body=[[009e6b30, 009e6c04]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_009e6b30(undefined4 *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *in_EAX;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  undefined4 uStack_20;
  DWORD aDStack_1c [2];
  
  iVar3 = *(int *)(in_EAX + 0x10);
  aDStack_1c[1] = 0x9e6b47;
  iVar4 = -(iVar3 + 1);
  if (0xf < *(uint *)(in_EAX + 0x14)) {
    in_EAX = *(char **)in_EAX;
  }
  iVar6 = iVar4 - (int)in_EAX;
  do {
    cVar1 = *in_EAX;
    in_EAX[(int)(&stack0xffffffec + iVar6)] = cVar1;
    in_EAX = in_EAX + 1;
  } while (cVar1 != '\0');
  *(int *)((int)aDStack_1c + iVar4 + 4) = iVar3;
  *(undefined1 **)((int)aDStack_1c + iVar4) = &stack0xffffffec + iVar4;
  *(undefined4 *)((int)&uStack_20 + iVar4) = 0x9e6b75;
  CharLowerBuffA(*(LPSTR *)((int)aDStack_1c + iVar4),*(DWORD *)((int)aDStack_1c + iVar4 + 4));
  pbVar8 = (byte *)*param_1;
  iVar3 = (param_1[1] - (int)pbVar8) / 0x1c;
  param_1 = (undefined4 *)0x0;
  if (0 < iVar3) {
    do {
      pbVar5 = &stack0xffffffec + iVar4;
      pbVar7 = pbVar8;
      if (0xf < *(uint *)(pbVar8 + 0x14)) {
        pbVar5 = &stack0xffffffec + iVar4;
        pbVar7 = *(byte **)pbVar8;
      }
      do {
        bVar2 = *pbVar5;
        bVar9 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_009e6bd0:
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_009e6bd5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar9 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_009e6bd0;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar6 = 0;
LAB_009e6bd5:
      if (iVar6 == 0) {
        return *(undefined4 *)(*param_2 + (int)param_1 * 4);
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
      pbVar8 = pbVar8 + 0x1c;
    } while ((int)param_1 < iVar3);
  }
  return 0;
}

