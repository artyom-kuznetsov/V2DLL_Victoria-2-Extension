// FUN_006692f0 @ 006692f0 body=[[006692f0, 0066949e]]


undefined4 FUN_006692f0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  float10 fVar6;
  undefined1 local_14 [4];
  float local_10;
  float local_c;
  float local_8;
  
  if ((*(char *)(*(int *)(unaff_ESI + 0x164c) + 0x4f) != '\0') && (*(int *)(param_1 + 0x14) == 4)) {
    piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x1648) + 0x68))(local_14);
    iVar5 = *piVar1;
    iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x1648) + 0x68))(local_14);
    iVar4 = *param_2;
    local_8 = *(float *)(iVar2 + 4);
    if ((iVar5 <= iVar4) &&
       ((((int)local_8 <= param_2[1] &&
         (psVar3 = (short *)(**(code **)(**(int **)(unaff_ESI + 0x1648) + 0x60))(&local_10),
         iVar4 <= *psVar3 + iVar5)) &&
        (iVar5 = param_2[1], iVar4 = (**(code **)(**(int **)(unaff_ESI + 0x1648) + 0x60))(&param_2),
        iVar5 <= (int)*(short *)(unaff_ESI + 0x1e16) * *(int *)(unaff_ESI + 0x1e18) +
                 (int)*(short *)(iVar4 + 2) + (int)local_8)))) {
      iVar5 = (**(code **)(**(int **)(unaff_ESI + 0x58) + 0x54))();
      local_8 = (float)-iVar5;
      iVar5 = *(int *)(unaff_ESI + 0x164c);
      local_c = (float)*(int *)(iVar5 + 0x238) / 1000.0;
      local_10 = (float)*(int *)(iVar5 + 0x234) / 1000.0;
      param_2 = (int *)(local_c /
                       (float)(*(int *)(unaff_ESI + 0xda8) - *(int *)(unaff_ESI + 0x1e18)));
      fVar6 = (float10)(**(code **)(*(int *)(iVar5 + 0x54) + 0x10))();
      param_2 = (int *)(float)((float10)(float)param_2 * (float10)local_8 + fVar6);
      FUN_009cc710(*(undefined4 *)(unaff_ESI + 0x164c));
      *(undefined1 *)(param_1 + 0x18) = 1;
      return 1;
    }
  }
  return 0;
}

