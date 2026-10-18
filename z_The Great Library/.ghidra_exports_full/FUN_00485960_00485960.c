// FUN_00485960 @ 00485960 body=[[00485960, 00485bc4]]


/* WARNING: Removing unreachable block (ram,0x004859d8) */

void FUN_00485960(int param_1,uint *param_2,int param_3,undefined4 param_4,int param_5,char param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int in_EAX;
  uint *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint local_c;
  undefined4 local_8;
  
  iVar2 = *(int *)(in_EAX + param_5 * 8);
  iVar3 = *(int *)(in_EAX + 4 + param_5 * 8);
  if ((iVar2 != DAT_0125ba10) || (iVar3 != DAT_0125ba14)) {
    FUN_0047e3e0(param_4,param_1 + 0x280);
    lVar8 = __allmul(iVar2,iVar3,local_c,local_8);
    lVar8 = lVar8 >> 0xf;
    if (*(longlong *)param_2 < lVar8) {
      uVar9 = __alldiv(*param_2 << 0xf,param_2[1] << 0xf | *param_2 >> 0x11,lVar8);
      lVar8 = __allmul(iVar2,iVar3,uVar9);
      FUN_0047e220(param_1 + 0x1d0,param_4,lVar8 >> 0xf);
      lVar8 = *(longlong *)param_2;
    }
    else {
      FUN_0047e220(param_1 + 0x1d0,param_4,iVar2,iVar3);
    }
    local_c = (uint)lVar8;
    FUN_0047dbb0(&DAT_013f2558,param_4);
    FUN_0047de60(&DAT_013f2558,*(undefined4 *)(in_EAX + param_5 * 8),
                 *(undefined4 *)(in_EAX + 4 + param_5 * 8));
    cVar6 = FUN_0047e040(&DAT_013f2558);
    uVar4 = *(uint *)(in_EAX + 0x48 + param_5 * 8);
    uVar9 = __alldiv(uVar4 << 0xf,*(int *)(in_EAX + 0x4c + param_5 * 8) << 0xf | uVar4 >> 0x11,
                     *(undefined4 *)(in_EAX + param_5 * 8),*(undefined4 *)(in_EAX + 4 + param_5 * 8)
                    );
    if (cVar6 != '\0') {
      FUN_0047dbb0(&DAT_013f24a8,param_4);
      FUN_0047de60(&DAT_013f24a8,*(undefined4 *)(in_EAX + param_5 * 8),
                   *(undefined4 *)(in_EAX + 4 + param_5 * 8));
      FUN_0047dca0(&DAT_013f2558);
      FUN_0047e040(&DAT_013f24a8);
      FUN_0047de60(&DAT_013f24a8,uVar9);
      FUN_0047dca0(&DAT_013f24a8);
      if (param_6 != '\0') {
        FUN_0047dca0(&DAT_013f24a8);
      }
      puVar1 = (uint *)(*(int *)(param_1 + 0x7f4) + *(int *)(param_3 + 0x20) * 8);
      puVar7 = (uint *)FUN_0047e3e0(&DAT_013f24a8,param_1 + 0x280);
      uVar5 = *puVar7;
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      puVar1[1] = puVar1[1] + puVar7[1] + (uint)CARRY4(uVar4,uVar5);
    }
    FUN_0047de60(&DAT_013f2558,uVar9);
    uVar4 = *param_2;
    *param_2 = *param_2 - local_c;
    param_2[1] = (param_2[1] - (int)((ulonglong)lVar8 >> 0x20)) - (uint)(uVar4 < local_c);
    FUN_0047dca0(&DAT_013f2558);
    if (param_6 != '\0') {
      FUN_0047dca0(&DAT_013f2558);
    }
  }
  return;
}

