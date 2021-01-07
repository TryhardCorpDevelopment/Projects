#ifndef Builder_h
#define Builder_h

class Builder
{
public:
    virtual ~Builder();
    virtual void tekstura() const=0;
    virtual void zycie() const=0;
    virtual void predkosc() const=0;
    virtual void stamina() const=0;
    virtual void pozycja() const=0;
};

#endif
