// FUN_00559770 @ 00559770 body=[[00559770, 00559805]]


void FUN_00559770(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  int *local_8;
  
  local_8 = (int *)FUN_004468a0(local_c);
  piVar2 = (int *)FUN_004468a0(local_10);
  if (*local_8 < *piVar2) {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  local_8 = (int *)FUN_004468a0(local_10);
  piVar2 = (int *)FUN_004468a0(local_c);
  if (*local_8 < *piVar2) {
    uVar1 = *param_1;
    *param_1 = *unaff_ESI;
    *unaff_ESI = uVar1;
  }
  piVar2 = (int *)FUN_004468a0(local_10);
  piVar3 = (int *)FUN_004468a0(local_c);
  if (*piVar2 < *piVar3) {
    uVar1 = *unaff_ESI;
    *unaff_ESI = *unaff_EDI;
    *unaff_EDI = uVar1;
  }
  return;
}

