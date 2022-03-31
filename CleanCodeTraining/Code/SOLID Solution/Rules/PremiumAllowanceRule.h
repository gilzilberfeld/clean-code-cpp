#pragma once
class PremiumAllowanceRule : public IAllowanceRule
{
public:
	virtual int GetFactor() override;
};
