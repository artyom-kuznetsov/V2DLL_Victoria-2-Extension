// FUN_0098f590 @ 0098f590 body=[[0098f590, 0098f61e]]


int * FUN_0098f590(void *param_1,void *param_2,void *param_3)

{
  void *in_ECX;
  int iVar1;
  int *in_EDX;
  
  do {
    if (param_1 == param_2) {
      iVar1 = (int)in_ECX - (int)param_3;
LAB_0098f609:
      FID_conflict__memcpy(in_EDX + -(iVar1 >> 2),param_3,(iVar1 >> 2) * 4);
      return in_EDX + -(iVar1 >> 2);
    }
    if (param_3 == in_ECX) {
      iVar1 = (int)param_2 - (int)param_1;
      param_3 = param_1;
      goto LAB_0098f609;
    }
    in_EDX = in_EDX + -1;
    if (*(float *)(*(int *)(*(int *)((int)in_ECX + -4) + 0x13c) + 0x98) <=
        *(float *)(*(int *)(*(int *)((int)param_2 + -4) + 0x13c) + 0x98)) {
      *in_EDX = *(int *)((int)in_ECX + -4);
      in_ECX = (void *)((int)in_ECX + -4);
    }
    else {
      *in_EDX = *(int *)((int)param_2 + -4);
      param_2 = (void *)((int)param_2 + -4);
    }
  } while( true );
}

