template <class Tkey, class Tvalue>
class Dictionary
{
public:
    Dictionary();
    void addF(Tkey key, const Tvalue &value);
    Tvalue findF(Tkey key) const;
private:
    vector<Tkey> keys;
    vector<Tvalue> values;
};

Tvalue Dictionary<Tkey, Tvalue>::findF(Tkey key)
{
    int location;
    for(int i = 0; i <key.size(); i++)
    {
        if(key[i] ==key)
            return values[i];
    }

}
