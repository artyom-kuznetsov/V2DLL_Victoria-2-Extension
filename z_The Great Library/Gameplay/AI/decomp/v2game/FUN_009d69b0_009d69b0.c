// FUN_009d69b0 @ 009d69b0 body=[[009d69b0, 009d69f9]]


void FUN_009d69b0(int param_1,void *param_2,void *param_3)

{
  size_t _Size;
  undefined4 *unaff_EDI;
  
  if (param_2 != param_3) {
    _Size = *(int *)(param_1 + 4) - (int)param_3;
    FID_conflict__memcpy(param_2,param_3,_Size);
    *(size_t *)(param_1 + 4) = _Size + (int)param_2;
    *unaff_EDI = param_2;
    return;
  }
  *unaff_EDI = param_2;
  return;
}

