return {
    DPKRsq = {
        description = 'An extension to Infantrysquad. A covert DPRK squadron',
        parents = {
            { btset = 'standard_behaviors', class = 'InfantrySquad' },
            -- More parent classes can be added. The 'btset' field is optional and defaults to the current project.
        },
        
        Match = function ()
        -- This class matches the same objects as the parent class does.
        -- You can add a condition matching only subset of soldiers.
            if
                type(self) == "GroupBrain"
            then
                return true
            end        
            return false
        end,

        behaviors = {
            Idle = {
                description = 'Idle',
                tree = 'Chill',
                parameters = {},
            },
            Succesive_Advance = {
                description = 'Succesive Advance',
                tree = 'Occupy',
                parameters = {},
            }
        },
    },
}