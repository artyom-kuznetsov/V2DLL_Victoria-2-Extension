// FUN_00860e10 @ 00860e10 body=[[00860e10, 00860e46]]


int * FUN_00860e10(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x1e4))();
  if (iVar1 < 0) {
    iVar1 = (**(code **)(*in_ECX + 0x1e4))();
    if (iVar1 < 0) goto LAB_00860e3f;
  }
  if (iVar1 < 0x4a) {
    return (int *)(&PTR_s__CAI_PLAN_GATHERARMIES__00f09170)[iVar1];
  }
LAB_00860e3f:
  return in_ECX + 0x25;
}

