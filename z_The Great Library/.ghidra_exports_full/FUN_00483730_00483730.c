// FUN_00483730 @ 00483730 body=[[00483730, 00483a85] [00483a89, 00483a9f]]


/* WARNING: Removing unreachable block (ram,0x0048399d) */

void FUN_00483730(int param_1,int param_2,int param_3,char param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint local_80;
  int local_7c;
  undefined1 local_70 [72];
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b46918;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0047dbb0();
  FUN_0047db00();
  local_c = 0;
  FUN_0047e3e0();
  iVar2 = *(int *)(param_3 + 100);
  uVar3 = *(uint *)(param_3 + 0x60);
  if ((iVar2 <= local_7c) &&
     (((iVar2 < local_7c || (uVar3 < local_80)) && (local_80 != 0 || local_7c != 0)))) {
    __alldiv(uVar3 << 0xf,iVar2 << 0xf | uVar3 >> 0x11,local_80,local_7c);
    FUN_0047de60(local_70);
  }
  FUN_0047dc20();
  cVar4 = FUN_0047e040();
  FUN_0047e3e0();
  if ((local_7c < iVar2) || ((local_7c <= iVar2 && (local_80 <= uVar3)))) {
    puVar1 = (uint *)(param_3 + 0x60);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - local_80;
    *(int *)(param_3 + 100) = (*(int *)(param_3 + 100) - local_7c) - (uint)(uVar3 < local_80);
    FUN_0047dc20();
    FUN_0047dca0();
    if (param_4 != '\0') {
      FUN_0047dca0();
    }
    if (cVar4 == '\0') goto LAB_00483a75;
    FUN_0047dca0();
    FUN_0047df00();
    FUN_0047e3e0();
    lVar7 = *(longlong *)(param_2 + 0x7c8);
    FUN_005339d0();
    lVar6 = __allmul(*(undefined4 *)(param_2 + 0x1440),*(undefined4 *)(param_2 + 0x1444));
    lVar7 = __allmul((lVar6 >> 0xf) + CONCAT44(DAT_00f0ae14,DAT_00f0ae10) + lVar7);
    iVar2 = *(int *)(param_3 + 100);
    uVar3 = *(uint *)(param_3 + 0x60);
    lVar7 = lVar7 >> 0xf;
    if (*(longlong *)(param_3 + 0x60) < lVar7) {
      uVar8 = __alldiv(uVar3 << 0xf,iVar2 << 0xf | uVar3 >> 0x11);
      FUN_0047de60(&DAT_013f2558);
      puVar1 = (uint *)(param_3 + 0x60);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - uVar3;
      *(int *)(param_3 + 100) = (*(int *)(param_3 + 100) - iVar2) - (uint)(uVar5 < uVar3);
      FUN_0047dc20();
      puVar1 = (uint *)(*(int *)(param_1 + 0x7f4) + *(int *)(param_2 + 0x20) * 8);
      lVar7 = __allmul(uVar8);
      uVar5 = (uint)(lVar7 >> 0xf);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + uVar5;
      puVar1[1] = puVar1[1] + (int)((ulonglong)(lVar7 >> 0xf) >> 0x20) + (uint)CARRY4(uVar3,uVar5);
    }
    else {
      puVar1 = (uint *)(param_3 + 0x60);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - (uint)lVar7;
      *(int *)(param_3 + 100) =
           (*(int *)(param_3 + 100) - (int)((ulonglong)lVar7 >> 0x20)) - (uint)(uVar3 < (uint)lVar7)
      ;
      FUN_0047dc20();
      puVar1 = (uint *)(*(int *)(param_1 + 0x7f4) + *(int *)(param_2 + 0x20) * 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + local_80;
      puVar1[1] = puVar1[1] + local_7c + (uint)CARRY4(uVar3,local_80);
    }
    FUN_0047dca0();
  }
  else {
    if (local_80 == 0 && local_7c == 0) goto LAB_00483a75;
    __alldiv(uVar3 << 0xf,iVar2 << 0xf | uVar3 >> 0x11,local_80,local_7c);
    FUN_0047de60(&DAT_013f24a8);
    puVar1 = (uint *)(param_3 + 0x60);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - uVar3;
    *(int *)(param_3 + 100) = (*(int *)(param_3 + 100) - iVar2) - (uint)(uVar5 < uVar3);
    FUN_0047dc20();
    FUN_0047dca0();
  }
  if (param_4 != '\0') {
    FUN_0047dca0();
  }
LAB_00483a75:
  if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

