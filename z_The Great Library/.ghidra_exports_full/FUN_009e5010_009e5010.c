// FUN_009e5010 @ 009e5010 body=[[009e5010, 009e50c5] [009e50c9, 009e512d] [009e5137, 009e515b]]


/* WARNING: Removing unreachable block (ram,0x009e5093) */

void FUN_009e5010(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *_Dst;
  void **ppvVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3fed8;
  local_10 = ExceptionList;
  iVar5 = 0;
  local_8 = 0;
  iVar4 = *(int *)(in_ECX + 0x310) - *(int *)(in_ECX + 0x30c) >> 2;
  ExceptionList = &local_10;
  ppvVar3 = &local_10;
  if (0 < iVar4) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x30c) + iVar5 * 4) + 0x38))();
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x30c) + iVar5 * 4) + 0x30))();
      iVar5 = iVar5 + 1;
      ppvVar3 = ExceptionList;
    } while (iVar5 < iVar4);
  }
  ExceptionList = ppvVar3;
  puVar1 = *(undefined4 **)(in_ECX + 0x31c);
  if (puVar1 != *(undefined4 **)(in_ECX + 800)) {
    puVar2 = *(undefined4 **)(in_ECX + 800);
    for (puVar6 = puVar1; puVar6 != puVar2; puVar6 = puVar6 + 7) {
      if (0xf < (uint)puVar6[5]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar6);
      }
      puVar6[5] = 0xf;
      puVar6[4] = 0;
      *(undefined1 *)puVar6 = 0;
    }
    *(undefined4 **)(in_ECX + 800) = puVar1;
  }
  _Dst = *(void **)(in_ECX + 0x30c);
  if (_Dst != *(void **)(in_ECX + 0x310)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x310),0);
    *(void **)(in_ECX + 0x310) = _Dst;
  }
  if (*(int *)(in_ECX + 0x80) == 0) {
    *(undefined4 *)(in_ECX + 0x80) = 0;
    *(undefined4 *)(in_ECX + 0x84) = 0;
    *(undefined4 *)(in_ECX + 0x88) = 0;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(in_ECX + 0x80));
}

