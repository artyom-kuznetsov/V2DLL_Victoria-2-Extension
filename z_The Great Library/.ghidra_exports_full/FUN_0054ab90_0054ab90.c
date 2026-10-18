// FUN_0054ab90 @ 0054ab90 body=[[0054ab90, 0054abe3]]


void FUN_0054ab90(int param_1,void *param_2,void *param_3)

{
  size_t _Size;
  undefined4 *unaff_EDI;
  
  if (param_2 != param_3) {
    _Size = (*(int *)(param_1 + 4) - (int)param_3 >> 2) * 4;
    FID_conflict__memcpy(param_2,param_3,_Size);
    *(void **)(param_1 + 4) = (void *)(_Size + (int)param_2);
    *unaff_EDI = param_2;
    return;
  }
  *unaff_EDI = param_2;
  return;
}

